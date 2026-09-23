// local_services.h - the console's services, served from this machine.
//
// A 360 title asks the system for things that used to come from a console and
// from Xbox Live: a signed-in profile, a save, the achievements it has earned,
// the scores on a leaderboard. There is no Live service here and none is coming,
// so every one of those questions gets one of two answers and never a third:
//
//   * a TRUTHFUL answer from local storage, for the things that belong to the
//     player and can be kept here - profile settings and saves, achievement
//     unlocks, the local high-score table; or
//   * the SPECIFIC unavailable code the console gives an offline box, for the
//     things that genuinely needed a service - sign-in to Live, friends,
//     presence, sessions, online leaderboards, the marketplace.
//
// What there is never any of is a convincing fake. That distinction is not
// stylistic: in these APIs 0 means SUCCESS, so a stub that returns zero tells a
// title its request worked and sends it down a path that needs a server. Four
// separate hunts in this project have ended at a handler that reported success
// for something that never happened, so a write here either lands on disk and
// says so, or fails and says that.
//
// Nothing in this layer is per-title. Everything is keyed by the running title's
// id and read out of the running title's own data, so a newly recompiled title
// gets working achievements, saves and a score table with no new code:
//
//   * its achievement definitions come from the XDBF/SPA resource inside its own
//     XEX (xdbf.h) - names, descriptions, gamerscore, per language. A title with
//     no such resource has no achievements, and the layer says so rather than
//     inventing any;
//   * what has been earned against them, its save, and its high scores live in
//     one host file keyed by title id (user_profile.h), so two titles cannot see
//     or overwrite each other's;
//   * the screens the system owns rather than the title - the achievement blade -
//     are drawn from those two (system_ui.h).
//
// Where a new shared service goes: a store belongs in user_profile.h beside the
// others, keyed by title id and written through the same atomic save; a new
// page of the system's own UI belongs in system_ui.h; anything read out of a
// title's own container belongs beside the XDBF parser. The kernel handlers stay
// thin - they translate guest registers and call in here.
#pragma once

#include "whitty_xenon/system_ui.h"
#include "whitty_xenon/user_profile.h"
#include "whitty_xenon/xdbf.h"
