ECE284 Submission folder template

This repository contains a suggested folder structure and templates to prepare your ECE284 project ZIP.

Quick checklist:
- Zip the top-level folders exactly as: `Part1_Vanilla`, `Part2_SIMD`, `Part3_Reconfigurable`, `Part4_Poster`, `Part5_Alpha`, `Part6_Report`.
- Each `hardware/sim` folder must contain a plain text file named exactly `filelist` (no extension) listing relative paths to the source Verilog files in `../verilog/`.
- Use the included `TEMPLATE_FILELIST.txt` as a reference when creating your `filelist`.

How we will run checks (for your reference):
```pwsh
cd Part1_Vanilla/hardware/sim
iveri filelist
irun
```

Use the `README` files inside each Part for part-specific notes.
