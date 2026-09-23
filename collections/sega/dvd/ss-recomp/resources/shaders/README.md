# Portable shader warmup seed

These are guest shader microcode and FSI pipeline descriptions captured through
run 081 (2026-09-12), including the end-of-race results transition. They are not
NVIDIA driver binaries. The runtime copies the pair into a user cache that does
not have it, driven by `shader_storage_seed_root = "shader_seed"` in
`config/splitsecond.toml`, so this works for a packaged build and not only for
`run.sh`. An existing user cache is never overwritten. The backend validates the
format versions and compiles the known pipelines at startup. Previously unseen
pipelines can still stall during play.

Install them next to the executable with
`bash tools/d3d/update_shader_seed.sh --install`, which also refreshes this
directory from the live cache.

Keep the files together: pipeline descriptions reference hashes in the shader
file. To update, close the game normally and copy both files from
`content_root/cache/shaders/shareable/`. Do not include the device-specific
`vulkan_driver` directory or the rejected FBO pipeline cache.
