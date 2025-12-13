datafiles/ — input vectors for simulation

This directory should contain the input data files used by the testbench and verification scripts for Part2_SIMD.

Expected files (you can add the required number of each file below with appropriate suffixes):
- weight_kij0.txt, weight_kij1.txt...         — weight values
- activation_2bit.txt, activation_4bit.txt    — activation/input values
- psum_2bit.txt, psum_4bit.txt                — expected partial-sum / golden outputs

Guidelines:
- Provide separate sets for 2-bit and 4-bit experiments where applicable.
- TAs may replace these files with instructor-provided vectors for grading; ensure your testbench reads files from this relative folder.
- If your testbench expects different filenames or formats, document that in `Part2_SIMD/hardware/README.md`.