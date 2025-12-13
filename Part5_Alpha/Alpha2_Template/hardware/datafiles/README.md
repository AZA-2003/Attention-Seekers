datafiles/ — input vectors for Alpha2_Template

This directory should contain the input data files used by the Alpha2 testbench and validation scripts.

Expected files (you can add the required number of each file below with appropriate suffixes):
- weight_kij0.txt, weight_kij1.txt...       — weight values
- activation.txt                            — activation/input values
- psum.txt                                  — expected partial-sum / golden outputs

Guidelines:
- Name files clearly; for multiple sets use suffixes like `_set1`.
- TAs or instructors may replace these files with their own vectors; ensure your testbench reads files from this relative folder.
- If your testbench expects different filenames or formats, document that in `Part5_Alpha/Alpha2_Template/hardware/README.md`.
