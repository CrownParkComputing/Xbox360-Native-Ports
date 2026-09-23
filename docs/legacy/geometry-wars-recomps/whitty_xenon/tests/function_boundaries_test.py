"""Config formats encountered when repairing GW1/GW2 shared controller tails."""
import importlib.util
from pathlib import Path
import tempfile
import tomllib
import unittest

spec = importlib.util.spec_from_file_location(
    'boundaries', Path(__file__).resolve().parents[1] /
    'tools/fix_function_boundaries.py')
boundaries = importlib.util.module_from_spec(spec)
spec.loader.exec_module(boundaries)


class ConfigRepairTest(unittest.TestCase):
    def test_preserves_functions_and_main_settings_in_both_formats(self):
        for declarations in (
            'functions = [{ address = 0x1000, size = 0x10 }]\n',
            'functions = [\n { address = 0x1000, size = 0x10 },\n]\n',
            '[[main.functions]]\naddress = 0x1000\nsize = 0x10\n',
        ):
            with self.subTest(declarations=declarations), tempfile.TemporaryDirectory() as tmp:
                path = Path(tmp) / 'game.toml'
                path.write_text('[main]\nfile_path = "assets/default.xex"\n' +
                                'out_directory_path = "ppc"\n' + declarations)
                self.assertEqual(boundaries.apply_to_config(
                    path, [(0x1000, 0x20), (0x1010, 8)]), (1, 1, 2))
                repaired = path.read_text()
                main = tomllib.loads(repaired)['main']
                self.assertEqual(main['file_path'], 'assets/default.xex')
                self.assertEqual(main['out_directory_path'], 'ppc')
                self.assertEqual(main['functions'], [
                    {'address': 0x1000, 'size': 0x20},
                    {'address': 0x1010, 'size': 8}])
                self.assertEqual(boundaries.apply_to_config(
                    path, [(0x1000, 0x10), (0x1010, 8)]), (0, 0, 2))
                self.assertEqual(path.read_text(), repaired)


if __name__ == '__main__':
    unittest.main()
