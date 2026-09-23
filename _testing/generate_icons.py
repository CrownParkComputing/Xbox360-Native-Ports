#!/usr/bin/env python3
# Generate placeholder icon.png for each port that lacks one. Reads the
# games.index for the display name, then draws a 256x256 PNG with a colored
# gradient background + bold abbreviation + subtle "no assets" label. The
# launcher reads /icon.png at the port root and prefers it over the XEX
# title extracted by `rexglue init achievements` - which we have not run.
import os, re, sys
from PIL import Image, ImageDraw, ImageFont

ROOT = "/home/jon/recomp-ports/recomp-family"
INDEX = f"{ROOT}/collections/sega/_shared/games.index"
FONT = "/usr/share/fonts/liberation/LiberationSans-Bold.ttf"

# (port-dir, display-name, abbreviation, primary-color)
SPECS = [
    ("alienbreed-recomp",      "Alien Breed: Evolution",    "ABE", (196, 60, 70)),
    ("burnoutrevenge-recomp",  "Burnout Revenge",            "BR",  (210, 110, 30)),
    ("choplifter",             "Choplifter HD",              "CHP", (40, 180, 100)),
    ("geometrywars-recomp",    "Geometry Wars",              "GW1", (255, 200, 50)),
    ("geometrywars2-recomp",   "Geometry Wars 2",            "GW2", (240, 180, 60)),
    ("geometrywars3-recomp",   "Geometry Wars 3",            "GW3", (255, 150, 30)),
    ("jetpac",                 "Jetpac Refuelled",          "JP",  (90, 200, 220)),
    ("pgr4-recomp",            "Project Gotham Racing 4",   "PGR4", (60, 120, 200)),
    ("rez-recomp",             "Rez HD",                     "REZ", (170, 80, 200)),
    ("rru-recomp",             "Ridge Racer Unbounded",     "RRU", (210, 80, 120)),
    ("sc4-recomp",             "SoulCalibur IV",             "SC4", (200, 50, 60)),
    ("segarally-recomp",       "SEGA Rally Online Arcade",   "SRA", (40, 160, 120)),
    ("sonic4ep1-recomp",       "Sonic 4: Episode I",       "S4E1", (60, 110, 220)),
    ("soulcalibur2-recomp",    "SoulCalibur II HD Online",   "SC2", (180, 60, 60)),
    ("ss-recomp",              "Split/Second",               "SS",  (220, 140, 30)),
]

W = H = 256

def gradient(c):
    """Diagonal gradient: top-left bright, bottom-right dark."""
    img = Image.new("RGB", (W, H), c)
    px = img.load()
    for y in range(H):
        for x in range(W):
            t = (x + y) / (W + H)
            r = int(c[0] * (1 - 0.55 * t))
            g = int(c[1] * (1 - 0.55 * t))
            b = int(c[2] * (1 - 0.55 * t))
            px[x, y] = (r, g, b)
    return img

def render(spec):
    port, name, abbr, color = spec
    img = gradient(color)
    d = ImageDraw.Draw(img)
    # Decorative diagonal stripe
    for i in range(0, W + H, 14):
        d.line([(i, 0), (i - H, H)], fill=(255, 255, 255, 28), width=2)
    # Big abbreviation centred
    f_big = ImageFont.truetype(FONT, 96)
    bbox = d.textbbox((0, 0), abbr, font=f_big)
    tw, th = bbox[2] - bbox[0], bbox[3] - bbox[1]
    d.text(((W - tw) / 2 - bbox[0], (H - th) / 2 - bbox[1] - 8),
           abbr, font=f_big, fill=(255, 255, 255, 240))
    # Game name at bottom
    f_sm = ImageFont.truetype(FONT, 18)
    d.text((12, H - 30), name, font=f_sm, fill=(255, 255, 255, 200))
    # NO ASSETS badge top-right
    f_xs = ImageFont.truetype(FONT, 13)
    badge = "NO ASSETS"
    bb = d.textbbox((0, 0), badge, font=f_xs)
    bw = bb[2] - bb[0] + 12
    d.rectangle([W - bw - 10, 10, W - 10, 32], fill=(0, 0, 0, 160))
    d.text((W - bw - 4, 12), badge, font=f_xs, fill=(230, 170, 90, 255))
    return img

written = []
for spec in SPECS:
    port_dir = f"{ROOT}/{spec[0]}"
    out = f"{port_dir}/icon.png"
    img = render(spec)
    img.save(out, "PNG", optimize=True)
    written.append((spec[0], out, os.path.getsize(out)))
for port, path, size in written:
    print(f"  {port:<25} {size:>7} bytes  {path}")
