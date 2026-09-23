// touch_pad.cpp -- the raylib half of the retro_touch_pad port.
//
// The model (profiles, layout JSON, direction merging) is carried over from
// the family's C++ half so the JSON files stay compatible. What differs is the
// host surface: raylib input polled per frame, raylib primitives drawn.
#include "touch_pad.h"

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <sstream>

namespace touchpad {

/* ---- the profiles ------------------------------------------------------ */

static const Color kRed    = { 230, 90, 90, 255 };
static const Color kGreen  = { 110, 200, 110, 255 };
static const Color kBlue   = { 100, 150, 230, 255 };
static const Color kYellow = { 220, 190, 90, 255 };
static const Color kSlate  = { 140, 150, 165, 255 };
static const Color kGrey   = { 170, 175, 185, 255 };
static const Color kAccent = { 80, 210, 220, 255 };

const Cluster *Profile::cluster(const std::string &cid) const {
    for (const Cluster &c : clusters) if (c.id == cid) return &c;
    return nullptr;
}

const Button *Cluster::button(const std::string &bid) const {
    for (const Button &b : buttons) if (b.id == bid) return &b;
    return nullptr;
}

namespace {

Cluster stick(const char *id, const char *label, float dx, float dy) {
    Cluster c;
    c.id = id; c.label = label; c.dx = dx; c.dy = dy;
    c.is_stick = true; c.stick_size = 150.0f; c.shape = Shape::Column;
    return c;
}

Cluster buttons(const char *id, const char *label, float dx, float dy,
                Shape s, std::vector<Button> b) {
    Cluster c;
    c.id = id; c.label = label; c.dx = dx; c.dy = dy;
    c.is_stick = false; c.stick_size = 0; c.shape = s; c.buttons = std::move(b);
    return c;
}

Button btn(const char *id, const char *label, Color col, float size = 64,
           Face f = Face::Circle) {
    return Button{ id, label, col, size, f };
}

} // namespace

const Profile &profile_xbox360() {
    static const Profile p = [] {
        Profile p; p.id = "xbox360"; p.name = "360 pad";
        p.default_stick = Stick::Dpad; p.allow_direction_buttons = false;
        p.clusters = {
            stick("dpad", "D-pad", 0.13f, 0.70f),
            buttons("face", "Buttons", 0.86f, 0.68f, Shape::Diamond, {
                btn("y", "Y", kYellow, 58), btn("x", "X", kBlue, 58),
                btn("b", "B", kRed, 58),    btn("a", "A", kGreen, 58) }),
            buttons("shoulder_l_top", "L1 / L2", 0.10f, 0.18f, Shape::Row, {
                btn("l1", "L1", kSlate, 44, Face::Pill),
                btn("l2", "L2", kSlate, 44, Face::Pill) }),
            buttons("shoulder_r_top", "R1 / R2", 0.90f, 0.18f, Shape::Row, {
                btn("r1", "R1", kSlate, 44, Face::Pill),
                btn("r2", "R2", kSlate, 44, Face::Pill) }),
            buttons("meta", "Back / Start", 0.50f, 0.92f, Shape::Row, {
                btn("back", "BACK", kGrey, 34, Face::Pill),
                btn("start", "START", kGrey, 34, Face::Pill) }),
        };
        return p;
    }();
    return p;
}

const Profile *profile_by_id(const std::string &id) {
    if (id == "xbox360") return &profile_xbox360();
    return nullptr;
}

/* ---- a very small JSON (parser carried from the family half) ----------- */

namespace {

struct J {
    enum T { Null, Bool, Num, Str, Arr, Obj } t = Null;
    bool b = false; double n = 0; std::string s;
    std::vector<J> a; std::map<std::string, J> o;
    const J *get(const char *k) const {
        if (t != Obj) return nullptr;
        auto it = o.find(k); return it == o.end() ? nullptr : &it->second;
    }
    double num(double d) const { return t == Num ? n : d; }
    bool boolean(bool d) const { return t == Bool ? b : d; }
    std::string str(const std::string &d) const { return t == Str ? s : d; }
};

struct Parser {
    const std::string &src; size_t i = 0; bool ok = true;
    explicit Parser(const std::string &s) : src(s) {}
    void ws() { while (i < src.size() && isspace((unsigned char)src[i])) ++i; }
    bool eat(char c) { ws(); if (i < src.size() && src[i] == c) { ++i; return true; } return false; }
    J value() {
        ws(); J v;
        if (i >= src.size()) { ok = false; return v; }
        const char c = src[i];
        if (c == '{') {
            ++i; v.t = J::Obj;
            if (eat('}')) return v;
            do {
                ws(); J k = value(); if (!ok || k.t != J::Str) { ok = false; return v; }
                if (!eat(':')) { ok = false; return v; }
                v.o[k.s] = value(); if (!ok) return v;
            } while (eat(','));
            if (!eat('}')) ok = false;
        } else if (c == '[') {
            ++i; v.t = J::Arr;
            if (eat(']')) return v;
            do { v.a.push_back(value()); if (!ok) return v; } while (eat(','));
            if (!eat(']')) ok = false;
        } else if (c == '"') {
            ++i; v.t = J::Str;
            while (i < src.size() && src[i] != '"') {
                if (src[i] == '\\' && i + 1 < src.size()) { ++i; }
                v.s += src[i++];
            }
            if (i < src.size()) ++i; else ok = false;
        } else if (c == 't') { v.t = J::Bool; v.b = true;  i += 4;
        } else if (c == 'f') { v.t = J::Bool; v.b = false; i += 5;
        } else if (c == 'n') { i += 4;
        } else {
            v.t = J::Num; size_t begin = i;
            while (i < src.size() && (isdigit((unsigned char)src[i]) ||
                   strchr("+-eE.", src[i]))) ++i;
            if (i == begin) { ok = false; return v; }
            v.n = strtod(src.c_str() + begin, nullptr);
        }
        return v;
    }
};

std::string quote(const std::string &s) {
    std::string out = "\"";
    for (char c : s) {
        if (c == '"' || c == '\\') out += '\\';
        out += c;
    }
    return out + "\"";
}

// (kept: small helper the parser may lean on later)
[[maybe_unused]] std::string trim(const std::string &s) {
    size_t b = s.find_first_not_of(" \t\r\n");
    if (b == std::string::npos) return "";
    size_t e = s.find_last_not_of(" \t\r\n");
    return s.substr(b, e - b + 1);
}

} // namespace

/* ---- the layout --------------------------------------------------------- */

Layout Layout::defaults(const Profile &p) {
    Layout l; l.profile = p.id; l.stick = p.default_stick;
    for (const Cluster &c : p.clusters)
        l.clusters[c.id] = Placed{ c.dx, c.dy, 1.0f, 1.0f, true };
    return l;
}

Layout Layout::decode(const std::string &json, const Profile &p) {
    Layout l = defaults(p);
    Parser j(json);
    J root = j.value();
    if (!j.ok || root.t != J::Obj) return l;
    // A layout written for another profile is the defaults: the ids would
    // not mean the same thing on this pad.
    if (root.get("profile") && root.get("profile")->str("") != p.id)
        return l;
    if (const J *st = root.get("stick"))
        l.stick = st->str("") == "dpad" ? Stick::Dpad
                : st->str("") == "wobble" ? Stick::Wobble : p.default_stick;
    if (const J *op = root.get("opacity"))
        l.opacity = (float)std::clamp(op->num(0.75), 0.25, 1.0);
    if (const J *cl = root.get("clusters")) {
        for (const J &one : cl->a) {
            const J *id = one.get("id");
            if (!id) continue;
            auto it = l.clusters.find(id->str(""));
            if (it == l.clusters.end()) continue;
            // centre is written as an [x, y] array, matching the family.
            if (const J *c = one.get("centre")) {
                if (c->t == J::Arr && c->a.size() >= 2) {
                    it->second.dx =
                        (float)std::clamp(c->a[0].num(it->second.dx), 0.0, 1.0);
                    it->second.dy =
                        (float)std::clamp(c->a[1].num(it->second.dy), 0.0, 1.0);
                }
            }
            if (const J *s = one.get("scale"))
                it->second.scale = (float)std::clamp(s->num(1.0), 0.5, 2.5);
            if (const J *s = one.get("spacing"))
                it->second.spacing = (float)std::clamp(s->num(1.0), 0.5, 2.5);
            if (const J *v = one.get("visible"))
                it->second.visible = v->boolean(true);
        }
    }
    if (const J *ex = root.get("extras")) {
        for (const J &one : ex->a) {
            const J *id = one.get("id");
            const J *c = one.get("centre");
            if (!id || !c || id->str("").empty()) continue;
            Extra e;
            e.id = id->str("");
            e.label = one.get("label") ? one.get("label")->str("") : e.id;
            if (c->t == J::Arr && c->a.size() >= 2) {
                e.dx = (float)std::clamp(c->a[0].num(0.5), 0.0, 1.0);
                e.dy = (float)std::clamp(c->a[1].num(0.5), 0.0, 1.0);
            } else {
                e.dx = (float)std::clamp(c->num(0.5), 0.0, 1.0);
                e.dy = (float)std::clamp(c->num(0.5), 0.0, 1.0);
            }
            e.scale = one.get("scale") ? (float)std::clamp(one.get("scale")->num(1.0), 0.5, 2.5) : 1.0f;
            l.extras.push_back(e);
        }
    }
    return l;
}

std::string Layout::encode() const {
    std::ostringstream o;
    o << "{\"profile\":" << quote(profile)
      << ",\"stick\":" << quote(stick == Stick::Dpad ? "dpad" : "wobble")
      << ",\"opacity\":" << opacity
      << ",\"clusters\":[";
    bool first = true;
    for (const auto &kv : clusters) {
        if (!first) o << ",";
        first = false;
        const Placed &p = kv.second;
        o << "{\"id\":" << quote(kv.first)
          << ",\"centre\":[" << p.dx << "," << p.dy << "]"
          << ",\"scale\":" << p.scale
          << ",\"spacing\":" << p.spacing
          << ",\"visible\":" << (p.visible ? "true" : "false") << "}";
    }
    o << "],\"extras\":[";
    first = true;
    for (const Extra &e : extras) {
        if (!first) o << ",";
        first = false;
        o << "{\"id\":" << quote(e.id) << ",\"label\":" << quote(e.label)
          << ",\"centre\":[" << e.dx << "," << e.dy << "]"
          << ",\"scale\":" << e.scale << "}";
    }
    o << "]}\n";
    return o.str();
}

std::string Layout::file_for(const std::string &dir, const Profile &p) {
    return dir + "/" + p.id + ".json";
}

Layout Layout::load(const std::string &dir, const Profile &p) {
    std::ifstream in(file_for(dir, p));
    if (!in) return defaults(p);
    std::ostringstream ss; ss << in.rdbuf();
    return decode(ss.str(), p);
}

bool Layout::save(const std::string &dir, const Profile &p) const {
    std::ofstream out(file_for(dir, p), std::ios::trunc);
    if (!out) return false;
    out << encode();
    return (bool)out;
}

/* ---- the overlay -------------------------------------------------------- */

static Vector2 shape_offset(Shape s, int /*count*/, int index, float gap) {
    // The family's shapes: Column straight down, Row across, Diamond around
    // the compass, Grid3x2 in rows. Offsets in logical pixels at scale 1.
    const float d = gap;
    switch (s) {
        case Shape::Column: return { 0, index * d };
        case Shape::Row:    return { index * d, 0 };
        case Shape::Diamond: {
            static const Vector2 kDiamond[4] = { {0,-d}, {-d,0}, {d,0}, {0,d} };
            return kDiamond[index % 4];
        }
        case Shape::Grid3x2: {
            const int row = index / 3, col = index % 3;
            return { (col - 1) * d, (row - 0.5f) * d };
        }
    }
    return { 0, 0 };
}

void Overlay::set(const Profile *p, const Layout &l) {
    if (held_.empty() && !stick_active_) {
        prof_ = p; lay_ = l;
        hits_.clear(); pointers_.clear();
        stick_knob_ = { 0, 0 }; stick_active_ = false;
        sent_[0] = sent_[1] = sent_[2] = sent_[3] = false;
    }
}

void Overlay::rebuild_hits(const Vector2 &pos, const Vector2 &size) {
    hits_.clear();
    if (!prof_) return;
    // The scale: the family sizes buttons in logical pixels at a nominal
    // 1280-wide area, so the overlay scales with the rectangle it is given.
    const float sc = std::min(size.x / 1280.0f, size.y / 720.0f) * 1.6f;
    last_pos_ = pos; last_size_ = size;
    for (const Cluster &c : prof_->clusters) {
        auto it = lay_.clusters.find(c.id);
        if (it == lay_.clusters.end()) continue;
        if (!it->second.visible) continue;
        const float cs = sc * it->second.scale;
        const Vector2 cc{ pos.x + it->second.dx * size.x,
                          pos.y + it->second.dy * size.y };
        if (c.is_stick) {
            Hit h; h.kind = "stick"; h.id = c.id;
            h.centre = cc; h.radius = c.stick_size * cs * 0.5f;
            hits_.push_back(h);
            continue;
        }
        const float gap = 72.0f * cs * it->second.spacing;
        for (size_t bi = 0; bi < c.buttons.size(); ++bi) {
            const Button &b = c.buttons[bi];
            const Vector2 off = shape_offset(c.shape, (int)c.buttons.size(),
                                             (int)bi, gap);
            Hit h; h.kind = "button"; h.id = b.id;
            h.centre = { cc.x + off.x, cc.y + off.y };
            h.radius = b.size * cs * 0.5f * 1.15f;   // a finger's slop
            h.half = { b.size * cs * 0.5f, b.size * cs * 0.25f };
            hits_.push_back(h);
        }
    }
    for (const Extra &e : lay_.extras) {
        const float es = sc * e.scale;
        Hit h; h.kind = "button"; h.id = e.id;
        h.centre = { pos.x + e.dx * size.x, pos.y + e.dy * size.y };
        h.radius = 34.0f * es * 0.5f * 1.15f;
        h.half = { 34.0f * es * 0.5f, 34.0f * es * 0.25f };
        hits_.push_back(h);
    }
}

const Overlay::Hit *Overlay::hit_at(const Vector2 &p) const {
    for (const Hit &h : hits_) {
        if (h.kind == "stick") {
            const float dx = p.x - h.centre.x, dy = p.y - h.centre.y;
            if (dx * dx + dy * dy <= h.radius * h.radius * 1.3f) return &h;
        } else {
            // Circles and pills: distance against the centre with the slop
            // already folded into the radius.
            const float dx = p.x - h.centre.x, dy = p.y - h.centre.y;
            if (dx * dx + dy * dy <= h.radius * h.radius) return &h;
        }
    }
    return nullptr;
}

void Overlay::press(const std::string &id, bool down, const Sink &sink) {
    // The count is per id: two pointers can hold one button (a finger and the
    // mouse), and the release must match the press that produced it.
    auto &count = held_[id];
    if (down) {
        ++count;
    } else if (count > 0) {
        --count;
        if (count == 0) held_.erase(id);
    }
    if (sink.action) sink.action(id, down);
}

void Overlay::recompute(const Sink &sink) {
    // The stick's four bits and the direction extras, merged, sent on change.
    if (!prof_) return;
    bool u = false, d = false, l = false, r = false;
    bool have_stick = false;
    for (const Cluster &c : prof_->clusters) {
        if (!c.is_stick) continue;
        auto lay = lay_.clusters.find(c.id);
        if (lay == lay_.clusters.end() || !lay->second.visible) continue;
        have_stick = true;
        if (lay_.stick == Stick::Wobble && !stick_active_) break;
        for (const auto &pkv : pointers_) {
            const Pointer &ptr = pkv.second;
            if (!ptr.stick || ptr.on != c.id) continue;
            // The direction is measured from the stick's hit centre.
            for (const Hit &h : hits_) if (h.kind == "stick" && h.id == c.id) {
                const float dx = ptr.pos.x - h.centre.x;
                const float dy = ptr.pos.y - h.centre.y;
                if (lay_.stick == Stick::Wobble) {
                    u = dy < -14; d = dy > 14; l = dx < -14; r = dx > 14;
                } else {
                    if (std::fabs(dy) > std::fabs(dx)) { u = dy < 0; d = dy > 0; }
                    else { l = dx < 0; r = dx > 0; }
                }
            }
            break;
        }
        break;   // one stick per pad
    }
    if (!have_stick && stick_active_) stick_active_ = false;
    for (const Extra &e : lay_.extras) {
        if (!e.is_direction()) continue;
        if (held_[e.id] > 0) {
            if (e.id == "dir:up") u = true;
            if (e.id == "dir:down") d = true;
            if (e.id == "dir:left") l = true;
            if (e.id == "dir:right") r = true;
        }
    }
    if (!have_stick && stick_active_) stick_active_ = false;
    if (u != sent_[0] || d != sent_[1] || l != sent_[2] || r != sent_[3]) {
        sent_[0] = u; sent_[1] = d; sent_[2] = l; sent_[3] = r;
        if (sink.directions) sink.directions(u, d, l, r);
    }
}

bool Overlay::held(const std::string &id) const {
    auto it = held_.find(id);
    return it != held_.end() && it->second > 0;
}

// ---- shared UI font -------------------------------------------------------
// One good face for the whole menu instead of raylib's bitmap default. The
// host loads it once; these wrappers fall back to raylib's built-in font
// until then, so nothing here depends on a font file being found.
namespace {
Font &ui_font() {
    static Font f = {};
    return f;
}
bool font_ready() { return ui_font().texture.id != 0; }
}  // namespace

void set_ui_font(Font f) { ui_font() = f; }

int ui_measure(const std::string &text, int size) {
    if (!font_ready()) return ui_measure(text.c_str(), size);
    return (int)MeasureTextEx(ui_font(), text.c_str(), (float)size, 1.0f).x;
}

void ui_text(const std::string &text, int x, int y, int size, Color color) {
    if (!font_ready()) { ui_text(text.c_str(), x, y, size, color); return; }
    DrawTextEx(ui_font(), text.c_str(), { (float)x, (float)y }, (float)size,
               1.0f, color);
}

void Overlay::update(const Vector2 &pos, const Vector2 &size, const Sink &sink) {
    if (!prof_) return;
    const bool moved = std::fabs(pos.x - last_pos_.x) > 0.5f ||
                       std::fabs(pos.y - last_pos_.y) > 0.5f ||
                       std::fabs(size.x - last_size_.x) > 0.5f ||
                       std::fabs(size.y - last_size_.y) > 0.5f;
    if (moved || hits_.empty()) rebuild_hits(pos, size);

    // Mouse: one more finger, id -1.
    const Vector2 m = GetMousePosition();
    const bool m_over = m.x >= pos.x && m.y >= pos.y &&
                        m.x <= pos.x + size.x && m.y <= pos.y + size.y;
    if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON) && m_over) {
        const Hit *h = hit_at(m);
        if (h) {
            Pointer p; p.pos = m; p.on = h->id; p.stick = (h->kind == "stick");
            pointers_[-1] = p;
            if (!p.stick) press(h->id, true, sink);
        }
    } else if (IsMouseButtonReleased(MOUSE_LEFT_BUTTON)) {
        auto it = pointers_.find(-1);
        if (it != pointers_.end()) {
            if (!it->second.stick) press(it->second.on, false, sink);
            pointers_.erase(it);
            recompute(sink);
        }
    } else if (IsMouseButtonDown(MOUSE_LEFT_BUTTON)) {
        auto it = pointers_.find(-1);
        if (it != pointers_.end()) {
            it->second.pos = m;
            const Hit *h = hit_at(m);
            const std::string now = (h && h->kind != "stick") ? h->id : it->second.on;
            if (now != it->second.on && !it->second.stick) {
                press(it->second.on, false, sink);
                it->second.on = now;
                press(now, true, sink);
            }
        }
    }

    // Touches: raylib's GetTouchPosition(0) returns the MOUSE position on
    // desktop builds, which would double-report the finger the mouse block
    // above already owns. Only slots 1.. become touch fingers there; on a real
    // touch screen (no mouse activity) slot 0 carries the first finger, and
    // the mouse block sees no buttons and stays out of the way.
    const bool mouse_busy = IsMouseButtonDown(MOUSE_LEFT_BUTTON);
    for (int i = mouse_busy ? 1 : 0; i < 8; ++i) {
        const long id = i;
        const Vector2 t = GetTouchPosition(i);
        const bool tracked = (t.x != 0.0f || t.y != 0.0f);
        if (tracked && t.x >= pos.x && t.y >= pos.y &&
            t.x <= pos.x + size.x && t.y <= pos.y + size.y) {
            if (pointers_.find(id) == pointers_.end()) {
                const Hit *h = hit_at(t);
                if (h) {
                    Pointer p; p.pos = t; p.on = h->id;
                    p.stick = (h->kind == "stick");
                    pointers_[id] = p;
                    if (!p.stick) press(h->id, true, sink);
                }
            } else {
                pointers_[id].pos = t;
            }
        } else {
            auto it = pointers_.find(id);
            if (it != pointers_.end() && id != -1) {
                if (!it->second.stick) press(it->second.on, false, sink);
                pointers_.erase(it);
                recompute(sink);
            }
        }
    }

    // The stick's knob follows its pointer, for the wobble draw.
    for (const auto &kv : pointers_) {
        if (!kv.second.stick) continue;
        for (const Hit &h : hits_) if (h.kind == "stick" && h.id == kv.second.on) {
            const float dx = kv.second.pos.x - h.centre.x;
            const float dy = kv.second.pos.y - h.centre.y;
            const float len = std::sqrt(dx * dx + dy * dy);
            const float maxr = h.radius * 0.6f;
            if (len > maxr) { stick_knob_ = { dx / len * maxr, dy / len * maxr }; }
            else stick_knob_ = { dx, dy };
        }
        stick_active_ = true;
    }
    if (pointers_.empty()) stick_active_ = false;

    recompute(sink);
}

void Overlay::draw(const Vector2 &pos, const Vector2 &size) {
    if (!prof_) return;
    // An external pad is the controller; the overlay would only cover the
    // picture (or the menu rows) with a second set of controls nobody is
    // touching. Hidden, not released: nothing is held through it anyway.
    if (auto_hidden_) return;
    if (std::fabs(pos.x - last_pos_.x) > 0.5f || hits_.empty()) rebuild_hits(pos, size);
    const float op = lay_.opacity;
    const float sc = std::min(size.x / 1280.0f, size.y / 720.0f) * 1.6f;
    const int fs = std::max(10, (int)(16 * sc));

    // Clusters.
    for (const Cluster &c : prof_->clusters) {
        auto it = lay_.clusters.find(c.id);
        if (it == lay_.clusters.end() || !it->second.visible) continue;
        const float cs = sc * it->second.scale;
        const Vector2 cc{ pos.x + it->second.dx * size.x,
                          pos.y + it->second.dy * size.y };
        if (c.is_stick) {
            const float r = c.stick_size * cs * 0.5f;
            DrawCircleV(cc, r, Color{ 30, 34, 40, (unsigned char)(70 * op) });
            DrawCircleLines((int)cc.x, (int)cc.y, r,
                            Color{ 197, 203, 211, (unsigned char)(120 * op) });
            const Vector2 knob{ cc.x + stick_knob_.x, cc.y + stick_knob_.y };
            DrawCircleV(knob, r * 0.45f,
                        stick_active_ ? Color{ kAccent.r, kAccent.g, kAccent.b, (unsigned char)(220 * op) }
                                      : Color{ 197, 203, 211, (unsigned char)(220 * op) });
            ui_text(c.label.c_str(), (int)(cc.x - ui_measure(c.label.c_str(), fs) / 2),
                     (int)(cc.y - r - fs * 1.4f), fs,
                     Color{ 197, 203, 211, (unsigned char)(140 * op) });
            continue;
        }
        const float gap = 72.0f * cs * it->second.spacing;
        for (size_t bi = 0; bi < c.buttons.size(); ++bi) {
            const Button &b = c.buttons[bi];
            const Vector2 off = shape_offset(c.shape, (int)c.buttons.size(),
                                             (int)bi, gap);
            const Vector2 centre{ cc.x + off.x, cc.y + off.y };
            const float r = b.size * cs * 0.5f;
            const bool down = held(b.id);
            Color fill{ b.colour.r, b.colour.g, b.colour.b,
                        (unsigned char)((down ? 230 : 130) * op) };
            if (b.face == Face::Pill) {
                DrawRectangleRounded(
                    Rectangle{ centre.x - r, centre.y - r * 0.55f, r * 2,
                               r * 1.1f }, 0.9f, 8, fill);
            } else if (b.face == Face::Square) {
                DrawRectangleRounded(
                    Rectangle{ centre.x - r, centre.y - r, r * 2, r * 2 },
                    0.25f, 8, fill);
            } else {
                DrawCircleV(centre, r, fill);
                DrawCircleLines((int)centre.x, (int)centre.y, r,
                                Color{ 20, 22, 26, (unsigned char)(160 * op) });
            }
            const int tw = ui_measure(b.label.c_str(), fs);
            ui_text(b.label.c_str(), (int)(centre.x - tw / 2.0f),
                     (int)(centre.y - fs / 2.0f), fs, WHITE);
        }
        const int lw = ui_measure(c.label.c_str(), fs);
        ui_text(c.label.c_str(), (int)(cc.x - lw / 2.0f),
                 (int)(cc.y - 96.0f * cs), fs,
                 Color{ 197, 203, 211, (unsigned char)(90 * op) });
    }

    // Extras.
    for (const Extra &e : lay_.extras) {
        const float es = sc * e.scale;
        const Vector2 centre{ pos.x + e.dx * size.x, pos.y + e.dy * size.y };
        const float r = 34.0f * es * 0.5f;
        const bool down = held(e.id);
        DrawCircleV(centre, r,
                    Color{ 197, 203, 211, (unsigned char)((down ? 230 : 110) * op) });
        const int tw = ui_measure(e.label.c_str(), fs);
        ui_text(e.label.c_str(), (int)(centre.x - tw / 2.0f),
                 (int)(centre.y - fs / 2.0f), fs, BLACK);
    }
}

void Overlay::release_all(const Sink &sink) {
    for (const auto &kv : held_) {
        for (int n = 0; n < kv.second; ++n)
            if (sink.action) sink.action(kv.first, false);
    }
    held_.clear();
    pointers_.clear();
    stick_active_ = false;
    stick_knob_ = { 0, 0 };
    if (sent_[0] || sent_[1] || sent_[2] || sent_[3]) {
        sent_[0] = sent_[1] = sent_[2] = sent_[3] = false;
        if (sink.directions) sink.directions(false, false, false, false);
    }
}

} // namespace touchpad
