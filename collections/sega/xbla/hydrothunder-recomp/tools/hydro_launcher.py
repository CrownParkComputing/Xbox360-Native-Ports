#!/usr/bin/env python3
"""Hydro Thunder-only launcher."""
import os
import subprocess
import tkinter as tk
from tkinter import filedialog, messagebox

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ICON = os.path.join(ROOT, "icon.png")


class HydroLauncher(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title("Hydro Thunder Hurricane")
        self.geometry("520x420")
        self.resizable(False, False)
        try:
            self.iconphoto(True, tk.PhotoImage(file=ICON))
        except tk.TclError:
            pass
        tk.Label(self, text="HYDRO THUNDER", font=("DejaVu Sans", 26, "bold")).pack(pady=(24, 0))
        tk.Label(self, text="HURRICANE", font=("DejaVu Sans", 18)).pack(pady=(0, 18))
        self.status = tk.StringVar(value=self.content_status())
        tk.Label(self, textvariable=self.status, wraplength=460).pack(pady=8)
        self.button("Play", self.play)
        self.button("Import game files / XEX", self.import_game)
        self.button("Install DLC", self.install_dlc)
        self.button("Clear game files", self.clear_content)
        self.button("Quit", self.destroy)

    def button(self, label, command):
        tk.Button(self, text=label, command=command, width=32, height=2).pack(pady=4)

    def content_status(self):
        return "Game files loaded." if os.path.isfile(os.path.join(ROOT, "assets", "default.xex")) else "No game files loaded. Import a RAR, ZIP, ISO, folder, or default.xex."

    def run_script(self, script, *args):
        subprocess.Popen([os.path.join(ROOT, "tools", script), *args], cwd=ROOT)
        self.after(1000, self.refresh)

    def refresh(self):
        self.status.set(self.content_status())

    def play(self):
        if not os.path.isfile(os.path.join(ROOT, "assets", "default.xex")):
            messagebox.showwarning("Hydro Thunder", "Import game files first.")
            return
        subprocess.Popen([os.path.join(ROOT, "run.sh")], cwd=ROOT)

    def import_game(self):
        path = filedialog.askopenfilename(title="Select Hydro game archive or default.xex")
        if path:
            self.run_script("import_content.sh", path)

    def install_dlc(self):
        path = filedialog.askopenfilename(title="Select Hydro DLC (LIVE, CON, or PIRS)")
        if path:
            self.run_script("import_dlc.sh", path)

    def clear_content(self):
        if messagebox.askyesno("Hydro Thunder", "Remove all imported Hydro game files?"):
            subprocess.run([os.path.join(ROOT, "tools", "clear_content.sh"), "--yes"], cwd=ROOT, check=False)
            self.refresh()


HydroLauncher().mainloop()
