#!/usr/bin/env python3
"""Bake a picture into a C++ header the cabinet can draw without a decoder.

The runtime has no image decoder and is not going to grow one for two pictures,
so they are stored already decoded: cropped to their own content, scaled to a
width the cabinet can use, and written out as plain bytes.

    make_image_header.py <png> <header> <Name> [--width N] [--mode rgb|rgba]
                         [--plain-ring CX,CY,R]

  --mode rgb    three bytes a pixel, coverage derived at draw time from the
                brightest channel. For artwork that is ink on pure black - the
                marquee logo - this is exact and a quarter smaller than storing
                an alpha nobody authored.
  --mode rgba   four bytes a pixel, for a picture with an alpha channel of its
                own, which is how a cut-out photograph arrives.

  --plain-ring  Paint over a disc in the SOURCE image, before scaling, with a
                plain ring in the surrounding greys. This exists for exactly one
                reason: assets/PROVENANCE.md forbids reproducing the Guide
                button's emblem, and a picture of a controller has one on it.
                Coordinates are in source pixels AFTER the crop; run with
                --measure to see that space.

Regenerate rather than hand-edit; the header says as much at the top.
"""

import argparse
import math
from PIL import Image

INK_FLOOR = 6  # below this a pixel is the black that ink artwork sits on


def crop_to_content(image, mode):
    """The picture's own bounds: its alpha where it has one, its ink where not."""
    if mode == "rgba":
        mask = image.getchannel("A").point(lambda v: 255 if v > 16 else 0)
    else:
        mask = image.convert("L").point(lambda v: 255 if v > INK_FLOOR else 0)
    box = mask.getbbox()
    return image.crop(box) if box else image


def paint_plain_ring(image, cx, cy, radius):
    """Replace a disc with a plain ring in the shades around it.

    The ring is drawn rather than blurred out because a smudge reads as damage
    and a ring reads as a button. Its shades are sampled from the shell just
    outside the disc, so it belongs to whatever picture it is painted into
    instead of to a palette written here.
    """
    pixels = image.load()
    width, height = image.size
    samples = []
    for step in range(72):
        angle = step * math.pi / 36.0
        x = int(cx + math.cos(angle) * (radius + 14))
        y = int(cy + math.sin(angle) * (radius + 14))
        if 0 <= x < width and 0 <= y < height:
            r, g, b, a = pixels[x, y]
            if a > 200:
                samples.append((r, g, b))
    if not samples:
        raise SystemExit("nothing around the disc to sample a shade from")
    shell = tuple(sum(c[i] for c in samples) // len(samples) for i in range(3))
    recess = tuple(max(0, int(c * 0.34)) for c in shell)
    rim = tuple(min(255, int(c * 0.62)) for c in shell)

    outer = radius * 0.78
    inner = radius * 0.55
    for y in range(int(cy - radius) - 2, int(cy + radius) + 3):
        for x in range(int(cx - radius) - 2, int(cx + radius) + 3):
            if not (0 <= x < width and 0 <= y < height):
                continue
            distance = math.hypot(x - cx, y - cy)
            if distance > radius:
                continue
            _, _, _, alpha = pixels[x, y]
            # Feathered so the patch meets the shell without a hard seam.
            edge = min(1.0, max(0.0, (radius - distance) / 6.0))
            if distance <= inner:
                colour = recess
            elif distance <= outer:
                colour = rim
            else:
                colour = shell
            was = pixels[x, y]
            blended = tuple(
                int(was[i] * (1.0 - edge) + colour[i] * edge + 0.5)
                for i in range(3)
            )
            pixels[x, y] = (blended[0], blended[1], blended[2], alpha)


def main():
    parser = argparse.ArgumentParser(add_help=True, description=__doc__)
    parser.add_argument("source")
    parser.add_argument("header")
    parser.add_argument("name", help="the C++ identifier stem, e.g. RecompLogo")
    parser.add_argument("--width", type=int, default=512)
    parser.add_argument("--mode", choices=("rgb", "rgba"), default="rgb")
    parser.add_argument("--plain-ring", default=None,
                        help="CX,CY,R in cropped source pixels")
    parser.add_argument("--measure", action="store_true",
                        help="print the cropped size and write nothing")
    args = parser.parse_args()

    image = Image.open(args.source).convert("RGBA")
    image = crop_to_content(image, args.mode)
    if args.measure:
        print(f"cropped to {image.width}x{image.height}")
        return

    if args.plain_ring:
        cx, cy, radius = (float(v) for v in args.plain_ring.split(","))
        paint_plain_ring(image, cx, cy, radius)

    height = max(1, round(image.height * args.width / image.width))
    image = image.resize((args.width, height), Image.LANCZOS)
    channels = 4 if args.mode == "rgba" else 3
    if args.mode == "rgb":
        image = image.convert("RGB")
    data = image.tobytes()

    stem = args.name
    with open(args.header, "w", encoding="ascii") as fh:
        w = lambda line="": print(line, file=fh)
        w(f"// Generated by tools/make_image_header.py from "
          f"{args.source.rsplit('/', 1)[-1]}")
        w("// Do not edit - regenerate.")
        w("#pragma once")
        w()
        w("#include <cstddef>")
        w("#include <cstdint>")
        w()
        w("namespace whitty_xenon::gpu {")
        w()
        if args.mode == "rgb":
            w("// Tightly packed RGB, no padding. Coverage is max(r, g, b): the")
            w("// artwork is ink on black, so a dark pixel is a transparent one.")
        else:
            w("// Tightly packed RGBA, no padding, straight (not premultiplied)")
            w("// alpha - the picture's own cut-out.")
        w(f"inline constexpr uint32_t k{stem}Width = {args.width};")
        w(f"inline constexpr uint32_t k{stem}Height = {height};")
        w(f"inline constexpr uint8_t k{stem}"
          f"{'Rgba' if channels == 4 else 'Rgb'}[] = {{")
        for start in range(0, len(data), 24):
            w("    " + ",".join(str(b) for b in data[start:start + 24]) + ",")
        w("};")
        w()
        w(f"static_assert(sizeof(k{stem}{'Rgba' if channels == 4 else 'Rgb'}) ==")
        w(f"                  k{stem}Width * k{stem}Height * {channels},")
        w('              "image blob is not the size its dimensions say");')
        w()
        w("}  // namespace whitty_xenon::gpu")
    print(f"{args.header}: {args.width}x{height} {args.mode}, {len(data)} bytes")


if __name__ == "__main__":
    main()
