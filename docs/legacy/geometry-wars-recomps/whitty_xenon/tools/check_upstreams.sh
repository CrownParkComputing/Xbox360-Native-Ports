#!/usr/bin/env bash
# check_upstreams.sh - how far behind are the references we depend on?
#
# This project does not derive answers it can read. Four repositories are the
# sources it reads from, and a stale copy of one is a silently worse answer:
# a kernel semantic Xenia corrected last month, or a ReXGlue finding from a
# port that has since been fixed, is exactly the kind of thing that is
# invisible until it costs a day.
#
# So this fetches and reports, and does NOT pull. Updating a reference is a
# decision - XenonRecomp in particular is pinned to a non-default branch on
# purpose, and moving it changes generated code for every title.
#
#   tools/check_upstreams.sh            # report
#   tools/check_upstreams.sh --fetch    # fetch first, then report (network)
set -uo pipefail

# tools/ -> whitty_xenon -> projects -> xenon-native, which is where repos/ is.
REPOS="$(cd "$(dirname "$0")/../../.." && pwd)/repos"
FETCH=0
[ "${1:-}" = "--fetch" ] && FETCH=1

# name | why it is here | licence
describe() {
    case "$1" in
      xenia-canary) echo "the BEHAVIOURAL oracle - every kernel handler's semantics|BSD-3" ;;
      rexglue-sdk)  echo "a second runtime for these same games - diagnosis, not patch|check before vendoring" ;;
      XenonRecomp)  echo "the PPC->C++ recompiler and XenonAnalyse. PINNED BRANCH|MIT" ;;
      recompiler)   echo "rexdex's original recompiler, historical reference|see repo" ;;
      *)            echo "|" ;;
    esac
}

printf '%-14s %-24s %-12s %s\n' REPO BRANCH LOCAL STATUS
for dir in "$REPOS"/*/; do
    name="$(basename "$dir")"
    git -C "$dir" rev-parse --git-dir >/dev/null 2>&1 || continue
    branch="$(git -C "$dir" rev-parse --abbrev-ref HEAD 2>/dev/null)"
    local_rev="$(git -C "$dir" log -1 --format='%h %cs' 2>/dev/null)"

    status="no upstream tracked"
    if [ "$FETCH" = "1" ]; then
        git -C "$dir" fetch --quiet origin 2>/dev/null || status="fetch failed (offline?)"
    fi
    upstream="$(git -C "$dir" rev-parse --abbrev-ref --symbolic-full-name '@{u}' 2>/dev/null)"
    if [ -n "$upstream" ]; then
        behind="$(git -C "$dir" rev-list --count "HEAD..$upstream" 2>/dev/null || echo '?')"
        ahead="$(git -C "$dir" rev-list --count "$upstream..HEAD" 2>/dev/null || echo '?')"
        if [ "$behind" = "0" ] && [ "$ahead" = "0" ]; then
            status="up to date with $upstream"
        else
            status="$behind behind, $ahead ahead of $upstream"
        fi
        # Local commits on a reference repo are OURS and would be lost by a
        # careless reset - say so loudly rather than in passing.
        [ "${ahead:-0}" != "0" ] && status="$status  ** LOCAL COMMITS **"
    fi
    printf '%-14s %-24s %-12s %s\n' "$name" "$branch" "${local_rev%% *}" "$status"
    IFS='|' read -r why lic <<< "$(describe "$name")"
    [ -n "$why" ] && printf '%-14s   %s (%s)\n' "" "$why" "$lic"
done

cat <<'NOTE'

Nothing was pulled. Before updating any of these:
  * XenonRecomp is on a NON-DEFAULT branch and its output is every title's
    generated code. Regenerate and re-run the gates before believing a move.
  * A reference is read, not linked. Being behind costs a stale answer, never
    a broken build - so update deliberately, not reflexively.
NOTE
