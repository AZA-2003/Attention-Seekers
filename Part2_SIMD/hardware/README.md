Hardware folder layout and quick run steps

Place sources in `verilog/`, data files in `datafiles/`, and the `filelist` in `sim/`.

Run steps (for reference):
```pwsh
cd Part2_SIMD/hardware/sim
iveri filelist
irun
```

The default testbench should cover both 2-bit and 4-bit modes without recompilation.
