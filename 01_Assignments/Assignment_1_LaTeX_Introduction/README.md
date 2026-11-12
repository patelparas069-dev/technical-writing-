# Assignment 1: LaTeX Introduction

Complete solution for the first LaTeX assignment covering basic document structure, equations, citations, and bibliography management.

## Assignment Overview

**Source**: Assignment 1.pdf  
**Topics**: Hello World, first LaTeX document, equations, citations and references

## Questions Checklist

- [x] Task 1: Hello World
- [x] Task 2: First document with table of contents
  - [x] 2.1: Multiple sections and subsections
  - [x] 2.2: Special characters
  - [x] 2.3: Numbered list
  - [x] 2.9: Science! (E=mc²)
- [x] Task 3: Equations, citations and cross-references
  - [x] Einstein citation
  - [x] Schrödinger equation with label
  - [x] Cross-reference to equation
  - [x] Bibliography with BibTeX

## Files

- `assignment1_solution.tex` - Complete LaTeX source file
- `physics.bib` - BibTeX bibliography database

## Key Concepts Demonstrated

### Document Structure
- `\documentclass[12pt,a4paper]{article}` - Document class with options
- Preamble vs document body
- Title, author, date with `\maketitle`

### Content Organization
- `\section{}` and `\subsection{}` commands
- `\tableofcontents` - Automatic table of contents
- Paragraph breaks with blank lines

### Lists
- `enumerate` environment for numbered lists
- `\item` for list items

### Mathematics
- Inline math: `\( E=mc^2 \)` or `$E=mc^2$`
- Display math with `equation` environment
- Equation labels with `\label{}`
- Cross-references with `\eqref{}`

### Citations and Bibliography
- `natbib` package for citation management
- `\citep{}` - Parenthetical citation
- `\citet{}` - Textual citation
- `\bibliography{}` - Include bibliography
- `\bibliographystyle{agu}` - Citation style

### Packages Used
- `natbib` - Citation management (round, authoryear options)
- `amsmath` - Enhanced math support
- `physics` - Physics notation (optional)

## Compilation Instructions

### Standard Workflow

```bash
pdflatex assignment1_solution.tex
bibtex assignment1_solution
pdflatex assignment1_solution.tex
pdflatex assignment1_solution.tex
```

### Why Multiple Compilations?

1. **First pdflatex**: Creates `.aux` file with citation keys and labels
2. **bibtex**: Processes bibliography, creates `.bbl` file
3. **Second pdflatex**: Incorporates bibliography into document
4. **Third pdflatex**: Resolves all cross-references and page numbers

### Expected Output Files

- `assignment1_solution.pdf` - Final compiled document
- `assignment1_solution.aux` - Auxiliary file with labels
- `assignment1_solution.bbl` - Formatted bibliography
- `assignment1_solution.blg` - BibTeX log file
- `assignment1_solution.log` - Compilation log

## Important Notes

### Default Font Size
The default font size for the `article` class is **10pt**. This assignment uses `12pt` as an explicit option.

### A4 Paper
The `a4paper` option sets the paper size to A4 (210mm × 297mm). Without this option, LaTeX defaults to US Letter size.

### Special Characters
The following characters must be escaped in LaTeX:
- `#` → `\#`
- `$` → `\$`
- `%` → `\%`
- `&` → `\&`
- `_` → `\_`
- `{` → `\{`
- `}` → `\}`
- `\` → `\textbackslash`

### Table of Contents
The table of contents may need two compilations to appear correctly:
1. First compilation creates the `.toc` file
2. Second compilation includes it in the document

### AGU Bibliography Style
The assignment requires the `agu.bst` (American Geophysical Union) bibliography style. This must be installed in your TeX distribution. If unavailable:

**Option 1**: Install from CTAN
```bash
# TeX Live
tlmgr install agu

# MiKTeX
mpm --install=agu
```

**Option 2**: Use an alternative style temporarily
Replace `\bibliographystyle{agu}` with:
- `plainnat` - Plain style with natbib
- `abbrvnat` - Abbreviated style
- `unsrtnat` - Unsorted style

## BibTeX Database

### physics.bib
This file contains two verified bibliographic entries:

1. **einstein1905**: Einstein's 1905 mass-energy equivalence paper
   - Original German title
   - Annalen der Physik, volume 323, issue 13
   - DOI included for verification

2. **schrodinger1926**: Schrödinger's 1926 quantum mechanics paper
   - First communication on quantization
   - Annalen der Physik, volume 384, issue 4
   - DOI included for verification

### Note on Missing Files
The instructor's original files (`first_latex_example.tex`, `first_latex_solutions.tex`, and `physics.bib`) were not included in the course materials. The provided `physics.bib` is a **reconstructed example** using verified bibliographic data from Wiley publisher metadata.

## Common Errors and Solutions

### Error: "Bibliography style 'agu' not found"
**Solution**: Install the `agu` package or use an alternative style like `plainnat`

### Error: "Citation undefined"
**Solution**: Run the full compilation sequence (pdflatex → bibtex → pdflatex → pdflatex)

### Error: "Undefined control sequence \citep"
**Solution**: Add `\usepackage{natbib}` to the preamble

### Warning: "There were undefined references"
**Solution**: Run pdflatex one more time to resolve all references

### Table of contents is empty
**Solution**: Compile the document twice

## Learning Outcomes

After completing this assignment, you should understand:
- How to structure a basic LaTeX document
- The difference between preamble and document body
- How to create sections and subsections
- How to include mathematical equations
- How to manage citations with BibTeX
- The LaTeX compilation workflow
- How to cross-reference equations

## Related Course Materials

- Lecture_1_TW (1).pdf - LaTeX fundamentals
- Topic Notes: `02_LaTeX/01_Introduction_and_Setup/`
- Topic Notes: `02_LaTeX/06_Mathematics/`
- Topic Notes: `02_LaTeX/13_Bibliography_Citations_and_References/`

## Next Steps

Try modifying the document:
1. Add more sections and subsections
2. Include additional equations with labels
3. Add more bibliography entries to `physics.bib`
4. Experiment with different citation styles
5. Add figures or tables (covered in later assignments)
