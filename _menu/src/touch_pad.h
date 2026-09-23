// touch_pad.h -- the on-screen controller, raylib edition.
//
// Ported from the retro_touch_pad family (Retro-PSX-SDL3 / Retro-Saturn
// frontends, frontend/touch_pad.{h,cpp}), which is the C++ half of the Dart
// retro_touch_pad package. Same model, same layout file format, same ids:
//
//   profile  what a machine has: clusters of buttons with default places, and
//            a stick or d-pad. Data, not code -- one overlay draws every one.
//   layout   where the player put them: fractions of the play area, a scale
//            and a hidden flag per cluster, plus any extra buttons. The JSON
//            written by the SDL frontends (and the Dart package) loads here
//            unchanged, so an arrangement made in one app means the same
//            thing in another.
//   overlay  draws a layout over the picture and turns pointers into presses.
//            Directions are merged -- the stick and any "UP as a button" are
//            combined here, so the host never sees two sources fighting over
//            the same joystick bits.
//
// The port to raylib replaces the two host-facing layers only: input arrives
// by polling raylib's mouse and touch state each frame (update()), and drawing
// goes through raylib primitives (draw()) instead of an ImDrawList. The sink
// interface is unchanged.
//
// The host supplies one sink: action(id, down) and directions(u,d,l,r).
#ifndef REXMENU_TOUCH_PAD_H
#define REXMENU_TOUCH_PAD_H

#include <raylib.h>

#include <functional>
#include <map>
#include <string>
#include <vector>

namespace touchpad {

enum class Shape { Column, Row, Diamond, Grid3x2 };
enum class Face  { Circle, Pill, Square };
enum class Stick { Wobble, Dpad };

struct Button {
    std::string id;
    std::string label;
    Color colour;
    float size;          // logical pixels at scale 1
    Face  face;
};

struct Cluster {
    std::string id;
    std::string label;
    float dx, dy;        // default centre, as fractions of the area
    bool  is_stick;
    float stick_size;
    Shape shape;
    std::vector<Button> buttons;
    const Button *button(const std::string &bid) const;
};

struct Profile {
    std::string id;
    std::string name;
    Stick default_stick;
    bool  allow_direction_buttons;
    std::vector<Cluster> clusters;
    const Cluster *cluster(const std::string &cid) const;
};

// The pads on offer. Ids match the family's profiles.
const Profile &profile_xbox360();
const Profile *profile_by_id(const std::string &id);

struct Placed {
    float dx, dy;
    float scale = 1.0f;
    float spacing = 1.0f;
    bool visible = true;
};

struct Extra {
    std::string id, label;   // "dir:up" for a direction, else a host action
    float dx, dy;
    float scale = 1.0f;
    float spacing = 1.0f;
    bool is_direction() const { return id.rfind("dir:", 0) == 0; }
};

struct Layout {
    std::string profile;
    std::map<std::string, Placed> clusters;
    std::vector<Extra> extras;
    Stick stick = Stick::Wobble;
    float opacity = 0.75f;

    static Layout defaults(const Profile &p);
    // Anything unreadable, or written for another profile, is the defaults:
    // a corrupt file must never be the reason a game has no controls.
    static Layout decode(const std::string &json, const Profile &p);
    std::string encode() const;

    static Layout load(const std::string &dir, const Profile &p);
    bool save(const std::string &dir, const Profile &p) const;
    static std::string file_for(const std::string &dir, const Profile &p);
};

struct Sink {
    std::function<void(bool up, bool down, bool left, bool right)> directions;
    std::function<void(const std::string &id, bool down)> action;
};

// The shared UI font, set once by the host at startup. Until then (and if no
// usable font was found) the wrappers below fall back to raylib's built-in
// font, so the overlay and the menu never depend on the host succeeding.
void set_ui_font(Font f);
int  ui_measure(const std::string &text, int size);
void ui_text(const std::string &text, int x, int y, int size, Color color);

class Overlay {
public:
    // Switching pad releases everything the old one held.
    void set(const Profile *p, const Layout &l);
    const Profile *profile() const { return prof_; }
    Layout &layout() { return lay_; }
    const Layout &layout() const { return lay_; }

    // Poll raylib's mouse and touch state and turn it into presses. Called
    // once per frame with the rectangle the pad occupies, in window pixels.
    // Mouse is accepted as one more finger, so the pad works on a desktop.
    void update(const Vector2 &area_pos, const Vector2 &area_size,
                const Sink &sink);

    // Draw with raylib primitives.
    void draw(const Vector2 &area_pos, const Vector2 &area_size);

    // Is an action currently held (for the menu's key-repeat)?
    bool held(const std::string &id) const;

    // Let go of everything held: leaving the game, hiding the pad.
    void release_all(const Sink &sink);

    // While a real, external gamepad is attached the overlay hides itself:
    // its job is to be the controller when there isn't one, not to cover the
    // picture when there is. Checked every draw(), so hotplug is noticed
    // within the pad scanner's two-second cache window.
    void set_auto_hidden(bool external_pad) { auto_hidden_ = external_pad; }
    bool auto_hidden() const { return auto_hidden_; }

    bool dirty = false;   // layout changed and wants saving

private:
    struct Pointer { Vector2 pos; std::string on; bool stick = false; };
    struct Hit { std::string kind; std::string id; Vector2 centre;
                 float radius; Vector2 half; };
    bool auto_hidden_ = false;

    void rebuild_hits(const Vector2 &pos, const Vector2 &size);
    const Hit *hit_at(const Vector2 &p) const;
    void recompute(const Sink &sink);
    void press(const std::string &id, bool down, const Sink &sink);

    const Profile *prof_ = nullptr;
    Layout lay_;
    std::vector<Hit> hits_;
    std::map<long, Pointer> pointers_;    // -1 is the mouse, >=0 raylib touches
    std::map<std::string, int> held_;     // action id -> pointer count
    bool sent_[4] = {false, false, false, false};
    Vector2 stick_knob_ = {0, 0};
    bool stick_active_ = false;
    Vector2 last_pos_, last_size_;
};

} // namespace touchpad

#endif // REXMENU_TOUCH_PAD_H
