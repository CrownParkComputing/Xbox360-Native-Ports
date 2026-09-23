#!/usr/bin/env python3
"""Summarize captured guest frame timings and synchronous draw-stage stalls."""
import argparse
import csv
import re
import statistics
from collections import defaultdict
from pathlib import Path


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("csv", type=Path)
    parser.add_argument("--log", type=Path)
    parser.add_argument("--min-draws", type=int, default=1000,
                        help="Filter menu frames (draw count is only a heuristic)")
    args = parser.parse_args()
    with args.csv.open() as stream:
        rows = [row for row in csv.DictReader(stream)
                if int(row["draws"]) >= args.min_draws]
    if not rows:
        parser.error("No frames match the draw-count filter")
    print(f"Frames: {len(rows)} (draws >= {args.min_draws})")
    for name in ("frame_ms", "draw_cpu_ms", "fence_wait_ms", "draws",
                 "submissions", "texture_sets_written", "texture_sets_reused",
                 "resolve_cpu_ms", "readback_sync_ms", "readback_copy_ms",
                 "readback_count", "readback_bytes",
                 "pipelines_created", "pipeline_create_ms"):
        if name not in rows[0]:
            continue
        values = sorted(float(row[name]) for row in rows)
        print(f"{name:24s} mean={statistics.mean(values):9.3f} "
              f"median={statistics.median(values):9.3f} "
              f"p95={values[int((len(values)-1)*.95)]:9.3f} max={values[-1]:9.3f}")
    for threshold in (50, 100, 500, 1000):
        print(f"Frames > {threshold} ms: "
              f"{sum(float(row['frame_ms']) > threshold for row in rows)}")
    stages = defaultdict(lambda: defaultdict(float))
    if args.log:
        text = args.log.read_text(errors="replace")
        for swap, stage, duration in re.findall(
                r"\[SLOWDRAW\] swap=(\d+) stage=(\w+) ms=([\d.]+)", text):
            # CSV increments at IssueSwap; draw logs use the preceding number.
            stages[int(swap) + 1][stage] += float(duration)
    if "pipeline_create_ms" in rows[0]:
        created = sum(int(row["pipelines_created"]) for row in rows)
        create_ms = sum(float(row["pipeline_create_ms"]) for row in rows)
        stall_frames = [row for row in rows if float(row["pipeline_create_ms"]) > 50]
        print(f"First-use pipeline creation: {created} pipelines, {create_ms:.0f} ms total, "
              f"{len(stall_frames)} frames over 50 ms of it")
        for row in sorted(stall_frames, key=lambda row: -float(row["pipeline_create_ms"]))[:5]:
            print(f"  swap={row['swap']} frame={row['frame_ms']} ms "
                  f"pipeline_create={row['pipeline_create_ms']} ms "
                  f"({row['pipelines_created']} pipelines)")
    print("Worst frames (logged stages omit calls below the timing threshold):")
    for row in sorted(rows, key=lambda row: float(row["frame_ms"]), reverse=True)[:10]:
        swap = int(row["swap"])
        stage_text = ", ".join(f"{name}={duration:.2f} ms"
                               for name, duration in stages[swap].items())
        print(f"  swap={swap} frame={row['frame_ms']} ms draw_cpu={row['draw_cpu_ms']} ms"
              + (f"; {stage_text}" if stage_text else ""))
    print("Fence wait is not GPU execution time; live runs are not matched A/B captures.")
    if "resolve_cpu_ms" in rows[0]:
        print("Resolve time is included in draw CPU time; readback sync/copy are nested "
              "inside resolve time. Do not add them together.")


if __name__ == "__main__":
    main()
