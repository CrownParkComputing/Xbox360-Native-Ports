#!/usr/bin/env python3
"""Run a bounded Vulkan test on Gamescope's private headless X display."""
import argparse
import os
from pathlib import Path
import shutil
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[2]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('output', type=Path)
    parser.add_argument('--inside', action='store_true', help=argparse.SUPPRESS)
    parser.add_argument('--boot-wait', type=float, default=50)
    parser.add_argument('--presses', type=int, default=14)
    parser.add_argument('--drive-seconds', type=float, default=25)
    args, game_args = parser.parse_known_args()
    if game_args[:1] == ['--']:
        game_args = game_args[1:]
    output = args.output.resolve()
    output.mkdir(parents=True, exist_ok=True)
    if not args.inside:
        if (output / 'stats.csv').exists():
            parser.error('Use a fresh output directory so timing captures are not appended')
        env = os.environ.copy()
        env['SS_OUTER_DISPLAY'] = env.get('DISPLAY', '')
        env['SS_HEADLESS_CHILD'] = '1'
        refresh = os.environ.get('SS_GAMESCOPE_REFRESH', '60')
        command = ['gamescope', '--backend', 'headless', '-W', '1280', '-H', '720',
                   '-r', refresh, '--', sys.executable, str(Path(__file__).resolve()),
                   str(output), '--inside', '--boot-wait', str(args.boot_wait),
                   '--presses', str(args.presses), '--drive-seconds', str(args.drive_seconds),
                   '--', *game_args]
        with (output / 'gamescope.log').open('w') as log:
            return subprocess.call(command, env=env, stdout=log, stderr=subprocess.STDOUT)

    display = os.environ.get('DISPLAY', '')
    if (os.environ.get('SS_HEADLESS_CHILD') != '1' or not display or
            display == os.environ.get('SS_OUTER_DISPLAY')):
        raise RuntimeError('Refusing to inject input without a private Gamescope display')
    env = os.environ.copy()
    env['SDL_VIDEODRIVER'] = 'x11'
    env['SDL_VIDEO_DRIVER'] = 'x11'
    env['SDL_AUDIODRIVER'] = 'dummy'
    env['SDL_AUDIO_DRIVER'] = 'dummy'
    # Keep automated race progress separate from the player's live saves.
    user_data = output / 'user_data'
    shutil.copytree(ROOT / 'content_root', user_data,
                    ignore=shutil.ignore_patterns('cache'))
    command = ['./splitsecond', '--game_data_root', str(ROOT / 'assets'),
               '--gpu_plugin', 'xenos', '--user_data_root', str(user_data),
               '--cache_root', os.environ.get('SS_CACHE_ROOT',
                                              str(ROOT / 'content_root/cache')),
               '--mnk_mode', f'--frame_dump_path={output}', '--frame_dump_interval=120',
               '--frame_dump_count=60', f'--gpu_frame_stats_path={output / "stats.csv"}',
               *game_args]
    with (output / 'stdout.txt').open('w') as log:
        game = subprocess.Popen(command, cwd=ROOT / 'out/build/linux', env=env,
                                stdout=log, stderr=subprocess.STDOUT)

        def wait(seconds):
            try:
                game.wait(timeout=seconds)
                raise RuntimeError(f'Game exited early ({game.returncode})')
            except subprocess.TimeoutExpired:
                pass

        def key(action, name):
            if game.poll() is not None:
                raise RuntimeError('Game closed; stopping input')
            result = subprocess.run(['xdotool', 'search', '--onlyvisible', '--pid', str(game.pid)],
                                    env=env, text=True, capture_output=True, timeout=5)
            windows = result.stdout.splitlines()
            if not windows:
                raise RuntimeError('No game window on the private display')
            subprocess.run(['xdotool', 'windowfocus', '--sync', windows[0]],
                           env=env, check=True, timeout=5)
            # Hold menu keys across several guest polls; a 12 ms XTest tap can
            # disappear between the game's 30 Hz controller samples.
            if action == 'key':
                subprocess.run(['xdotool', 'keydown', name], env=env, check=True, timeout=5)
                wait(0.15)
                subprocess.run(['xdotool', 'keyup', name], env=env, check=True, timeout=5)
            else:
                subprocess.run(['xdotool', action, name], env=env, check=True, timeout=5)
            with (output / 'inputs.txt').open('a') as events:
                events.write(f'display={display} {action} {name}\n')

        try:
            wait(args.boot_wait)
            for _ in range(args.presses):
                key('key', 'space')
                wait(5)
            key('keydown', 'e')
            wait(args.drive_seconds)
            key('keyup', 'e')
            wait(2)
        finally:
            if game.poll() is None:
                game.terminate()
                try:
                    game.wait(timeout=10)
                except subprocess.TimeoutExpired:
                    game.kill()
                    game.wait()
    (output / 'done').write_text('Headless test completed. Inspect captures before comparing timings.\n')
    return 0


if __name__ == '__main__':
    sys.exit(main())
