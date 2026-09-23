// cabinet_facts.h - the few things about a title that the title does not say.
//
// THIS FILE IS THE EXCEPTION, AND IT IS A SEPARATE FILE SO THE EXCEPTION IS
// VISIBLE.
//
// Everything else on the cabinet's info panel is read out of the running title
// or out of this machine's own records: the name comes from the SPA resource
// inside the title's own XEX, the title id from its execution info, the
// achievement and leaderboard tables from the SPA, the resolution from the
// colour target the title renders into, and the high scores from the local
// profile. None of it is written down anywhere in this repository, and none of
// it can drift out of date, because it is re-read from the game every run.
//
// A publisher and a year are not in there. There is no field for either in an
// XEX, in an SPA, or in an STFS package's metadata - checked, not assumed - so
// the only way this runtime can show one is if a person types it in. That is
// what this table is, and it is held to two rules:
//
//  1. NOTHING IS GUESSED. A title with no entry here shows no publisher and no
//     year at all. A panel that says "Published by ???, 2007?" is worse than a
//     panel that only says what it knows, and this project has a long enough
//     list of "plausible wrong behaviour" already - see docs/BRINGUP.md, "the
//     recurring bug class". An empty field is a fact about our records; a
//     filled-in wrong one is a claim about the game.
//  2. IT IS NEVER MIXED IN WITH THE REST. The panel puts these rows under
//     their own heading, so a reader can always tell which lines came out of
//     the game and which came out of this file.
//
// To add a title: one line, with the title id in hex as `title_probe` reports
// it. Leave any field you are not sure of as an empty string - a blank is
// always allowed and is always better than a maybe.
//
//     {0x584108FF, "…", "…", "…"},   // Geometry Wars: Retro Evolved 2
//
// The table ships EMPTY on purpose. The entries would be mine to invent
// otherwise, and inventing them is the one thing this file exists to prevent.
//
// The same file also carries WHAT EACH CONTROL DOES, for the same reason and
// under the same rules. See the second table below.
#pragma once

#include "whitty_xenon/gpu/cabinet.h"

#include <cstdint>
#include <vector>

namespace whitty_xenon::gpu {

// One title's hand-entered facts. Every string may be empty, and an empty
// string means "nobody has filled this in" - which the panel shows as the row
// being absent, never as a blank or a question mark.
struct cabinet_fact {
    uint32_t title_id{0};
    const char* publisher{""};
    const char* developer{""};
    const char* year{""};
};

// The table. The first entry is a sentinel with a title id of zero - no title
// has id zero, so it can never match - and it is here only because C++ has no
// zero-length array. Add real entries after it.
inline constexpr cabinet_fact kCabinetFacts[] = {
    {0, "", "", ""},
};

// The entry for a title, or nullptr when nobody has written one. Nullptr is the
// normal case and is not a failure.
inline const cabinet_fact* cabinet_facts_for(uint32_t title_id) {
    if (title_id == 0) return nullptr;
    for (const cabinet_fact& fact : kCabinetFacts)
        if (fact.title_id == title_id) return &fact;
    return nullptr;
}

// --- what each control DOES ------------------------------------------------
//
// The runtime knows which physical control is wired to which Xbox button -
// sample_pad() in run_title.cpp - and that mapping is the same for every title
// on the console, so it can never tell you that the right stick means "fire".
// Nothing can: it is not in the XEX, not in the SPA, not in the XDBF. It is
// knowledge about the GAME, and the only place it can come from is somebody who
// has played it.
//
// So it is authored here, and it is held to the same rule as the publisher
// above, which is the rule this whole file exists for:
//
//   A TITLE WITH NO ENTRY SHOWS THE PAD WITH NO LABELS. It does not get
//   labels inferred from its genre. "It is a shooter, so the right stick is
//   probably fire" is the plausible-story-over-real-data mistake that
//   docs/BRINGUP.md has a numbered list of, and a legend that confidently
//   tells a player the wrong button is worse than one that says nothing -
//   it is the same lie as a handler reporting success for work it never did.
//
// `confirmed` says the entry came from somebody who played the title, the way
// TITLE_PROFILES in tools/run_gui.py marks a frame confirmed. An unconfirmed
// entry is still shown - it is somebody's honest note - but the flag is there
// so a doubtful one can be found again.
//
// THERE IS A BETTER SOURCE THAN ANYBODY'S MEMORY, AND IT IS THE GAME. Most of
// these titles carry their own controls screen, reachable from their own front
// end, and that screen is the title stating its mapping in its own words. It is
// harvested rather than recalled: WHITTY_FAKE_INPUT walks the menus,
// WHITTY_FRAME_PPM captures the screen, and the mapping is read off the
// picture. `note` says which screen it was read from, so anybody can go back
// and check the same way - and a row whose note names no screen is a row
// somebody remembered, which is a weaker thing and now says so.
//
// TO ADD A TITLE: one row per control, with the title id in hex. Only add what
// you have actually seen. Leaving a button out is always allowed; guessing at
// one is not.
struct cabinet_control_entry {
    uint32_t title_id{0};
    pad_control control{pad_control::a};
    const char* action{""};
    bool confirmed{false};
    // Where this was read from. A screen inside the game, named, or empty.
    const char* note{""};
};

// Read off each title's OWN controls screen. Nothing here is recalled and
// nothing is inferred from a genre.
//
// Geometry Wars: Retro Evolved states three lines and only three - Movement,
// Firing, Bomb - on Help and options > Controls. It says nothing about Start or
// Back on that screen, so neither is written down here. Those are not absent
// because the game lacks them; they are absent because the game did not say,
// and the pad does not label a control the game did not name.
inline constexpr cabinet_control_entry kCabinetControls[] = {
    {0x584107ED, pad_control::left_stick, "Move", true,
     "its own Help and options > Controls: \"Movement: Left stick\""},
    {0x584107ED, pad_control::right_stick, "Fire", true,
     "its own Help and options > Controls: \"Firing: Right stick\""},
    // "Bomb: Triggers" - the screen names the pair, so both carry it.
    {0x584107ED, pad_control::left_trigger, "Bomb", true,
     "its own Help and options > Controls: \"Bomb: Triggers\""},
    {0x584107ED, pad_control::right_trigger, "Bomb", true,
     "its own Help and options > Controls: \"Bomb: Triggers\""},

    // Geometry Wars 2 states the same three on Help and options > Controls,
    // and draws a pad diagram beside them: an arrow to the left stick, an arrow
    // to the right stick, and a bracket spanning LT and RT. Read off that
    // screen for THIS title rather than carried over from Geometry Wars 1 -
    // two games by one studio is a reason to check, not a reason to assume.
    {0x584108FF, pad_control::left_stick, "Move", true,
     "its own Help and options > Controls: \"Movement: Left stick\""},
    {0x584108FF, pad_control::right_stick, "Fire", true,
     "its own Help and options > Controls: \"Firing: Right stick\""},
    {0x584108FF, pad_control::left_trigger, "Bomb", true,
     "its own Help and options > Controls: \"Bomb: Triggers\", bracketed to "
     "LT and RT on the diagram"},
    {0x584108FF, pad_control::right_trigger, "Bomb", true,
     "its own Help and options > Controls: \"Bomb: Triggers\", bracketed to "
     "LT and RT on the diagram"},

    // Space Giraffe draws its own face-on pad diagram on Help & Options >
    // Controls and points an arrow at each control, which is as unambiguous as
    // a source gets. Five arrows, five rows; the wording is the screen's own.
    // The three lines under it - "Default map", "Cancel", "Exit and save" - are
    // about THAT SCREEN, not about the game, so they are not written down.
    {0x5841080C, pad_control::left_stick, "Move", true,
     "its own Help & Options > Controls diagram: arrow to the left stick"},
    {0x5841080C, pad_control::right_stick, "Aim shoot", true,
     "its own Help & Options > Controls diagram: arrow to the right stick"},
    {0x5841080C, pad_control::a, "Bomb", true,
     "its own Help & Options > Controls diagram: arrow to the green A button"},
    {0x5841080C, pad_control::left_trigger, "Speed", true,
     "its own Help & Options > Controls diagram: arrow to LT"},
    {0x5841080C, pad_control::right_trigger, "Jump", true,
     "its own Help & Options > Controls diagram: arrow to RT"},
};

// Every control anybody has authored for a title, in the order written. Empty
// for every title but the one above, and empty is the answer that draws no
// labels.
inline std::vector<cabinet_control> cabinet_controls_for(uint32_t title_id) {
    std::vector<cabinet_control> out;
    if (title_id == 0) return out;
    for (const cabinet_control_entry& entry : kCabinetControls)
        if (entry.title_id == title_id)
            out.push_back(cabinet_control{entry.control, entry.action});
    return out;
}

} // namespace whitty_xenon::gpu
