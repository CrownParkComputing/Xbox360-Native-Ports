// virt_pad.h -- the uinput virtual Xbox 360 pad, carried over from rayview.
//
// The menu creates one at startup so that SDL inside the game always finds
// it, and forwards whatever the on-screen retro_touch_pad holds while the
// game is playing. Chain: pad overlay on the menu window -> uinput -> evdev
// -> SDL in the game -> guest XamInputGetState. Real pads pass through on
// their own; this device only ever carries what the overlay sends.
#ifndef REXMENU_VIRT_PAD_H
#define REXMENU_VIRT_PAD_H

#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <dirent.h>
#include <fstream>
#include <string>

#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/uinput.h>

// Is a real, physical gamepad attached right now? The on-screen overlay asks
// this every frame in its Auto mode: with an external control present the
// pad overlay hides itself and stops forwarding, because the game's SDL reads
// evdev directly and a real pad needs no help.
//
// The discriminator is sysfs uniq: this menu's own virtual pad is created
// with uniq "rexmenu-virt-pad", so it never counts as an external control no
// matter how identical its name looks. uinput devices created by other tools
// (rayview, for one) carry their own uniq and are skipped only if it says
// rexmenu - otherwise they count, which is the honest answer: something else
// is already driving the game.
static inline bool rexmenu_name_looks_like_pad(const std::string &raw) {
    std::string s;
    for (char c : raw)
        s.push_back((char)std::tolower((unsigned char)c));
    static const char *const kTokens[] = {
        "x-box", "xbox", "360 pad", "360 controller", "x-input", "xinput",
        "gamepad", "game pad", "joystick", "dualshock", "dualsense",
        "wireless controller", "pro controller", "switch pro",
        "8bitdo", "steam controller", "steam deck", "mayflash",
        "thrustmaster", "mad catz", "horipad",
    };
    for (const char *t : kTokens)
        if (s.find(t) != std::string::npos) return true;
    return false;
}

static inline bool rexmenu_real_pad_present() {
    static time_t next_scan = 0;
    static bool cached = false;
    const time_t now = time(nullptr);
    if (now < next_scan) return cached;
    next_scan = now + 2;   // hotplug is noticed within two seconds

    bool found = false;
    if (DIR *d = opendir("/sys/class/input")) {
        while (dirent *e = readdir(d)) {
            // Only the inputX class nodes carry name/uniq; eventX would
            // double-report the same device.
            if (std::strncmp(e->d_name, "input", 5) != 0) continue;
            const std::string base = std::string("/sys/class/input/") + e->d_name;
            std::ifstream uniq(base + "/uniq");
            std::string uq;
            std::getline(uniq, uq);
            if (uq.find("rexmenu") != std::string::npos) continue;
            std::ifstream name(base + "/name");
            std::string nm;
            std::getline(name, nm);
            if (rexmenu_name_looks_like_pad(nm)) { found = true; break; }
        }
        closedir(d);
    }
    cached = found;
    return cached;
}

struct VirtPad {
    int fd = -1;

    bool create() {
        fd = open("/dev/uinput", O_WRONLY | O_NONBLOCK);
        if (fd < 0) {
            std::fprintf(stderr, "rexmenu: cannot open /dev/uinput: %s\n",
                         strerror(errno));
            return false;
        }
        ioctl(fd, UI_SET_EVBIT, EV_KEY);
        ioctl(fd, UI_SET_EVBIT, EV_ABS);
        ioctl(fd, UI_SET_EVBIT, EV_SYN);
        for (int b : { BTN_SOUTH, BTN_EAST, BTN_WEST, BTN_NORTH, BTN_TL,
                       BTN_TR, BTN_SELECT, BTN_START, BTN_THUMBL,
                       BTN_THUMBR })
            ioctl(fd, UI_SET_KEYBIT, b);
        for (int a : { ABS_X, ABS_Y, ABS_RX, ABS_RY, ABS_Z, ABS_RZ,
                       ABS_HAT0X, ABS_HAT0Y })
            ioctl(fd, UI_SET_ABSBIT, a);
        uinput_setup setup{};
        snprintf(setup.name, sizeof(setup.name), "Microsoft X-Box 360 pad");
        setup.id.bustype = BUS_USB;
        setup.id.vendor = 0x045e;
        setup.id.product = 0x028e;
        setup.id.version = 0x0114;
        ioctl(fd, UI_DEV_SETUP, &setup);
        // Axis ranges: sticks +/-32768, triggers 0..255, hats -1..1.
        const auto set_abs = [&](int axis, int mn, int mx) {
            uinput_abs_setup abs{};
            abs.code = axis;
            abs.absinfo.minimum = mn;
            abs.absinfo.maximum = mx;
            ioctl(fd, UI_ABS_SETUP, &abs);
        };
        set_abs(ABS_X, -32768, 32767);
        set_abs(ABS_Y, -32768, 32767);
        set_abs(ABS_RX, -32768, 32767);
        set_abs(ABS_RY, -32768, 32767);
        set_abs(ABS_Z, 0, 255);
        set_abs(ABS_RZ, 0, 255);
        set_abs(ABS_HAT0X, -1, 1);
        set_abs(ABS_HAT0Y, -1, 1);
        if (ioctl(fd, UI_DEV_CREATE) < 0) {
            std::fprintf(stderr, "rexmenu: UI_DEV_CREATE: %s\n",
                         strerror(errno));
            close(fd);
            fd = -1;
            return false;
        }
        return true;
    }

    void emit(int type, int code, int value) {
        if (fd < 0) return;
        input_event ev{};
        ev.type = type;
        ev.code = code;
        ev.value = value;
        if (write(fd, &ev, sizeof(ev)) < 0) { /* device went away; keep going */ }
    }
    void key(int code, bool down) { emit(EV_KEY, code, down ? 1 : 0); }
    void abs(int code, int value)  { emit(EV_ABS, code, value); }
    void sync()                    { emit(EV_SYN, SYN_REPORT, 0); }

    // Everything back to rest: the state the game should see between plays.
    void release_all() {
        key(BTN_SOUTH, false); key(BTN_EAST, false);
        key(BTN_WEST, false);  key(BTN_NORTH, false);
        key(BTN_TL, false);    key(BTN_TR, false);
        key(BTN_SELECT, false); key(BTN_START, false);
        key(BTN_THUMBL, false); key(BTN_THUMBR, false);
        abs(ABS_X, 0); abs(ABS_Y, 0); abs(ABS_RX, 0); abs(ABS_RY, 0);
        abs(ABS_Z, 0); abs(ABS_RZ, 0);
        abs(ABS_HAT0X, 0); abs(ABS_HAT0Y, 0);
        sync();
    }

    ~VirtPad() {
        if (fd >= 0) {
            ioctl(fd, UI_DEV_DESTROY);
            close(fd);
        }
    }
};

#endif // REXMENU_VIRT_PAD_H
