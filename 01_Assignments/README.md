# Assignments Directory

Complete worked solutions for all Technical Writing course assignments.

## Assignment List

### Assignment 1: LaTeX Introduction
**Location**: `Assignment_1_LaTeX_Introduction/`  
**Topics**: Document structure, equations, citations, BibTeX  
**Compiler**: pdfLaTeX  
**Files**: assignment1_solution.tex, physics.bib

### Assignment 3: Mathematical Typesetting
**Location**: `Assignment_3_Mathematics/`  
**Topics**: Inline/display math, fractions, symbols, matrices  
**Compiler**: pdfLaTeX  
**Files**: assignment3_math.tex

### Assignment 3 TW Lab: Arrays and Tables
**Location**: `Assignment_3_TW_Lab_Arrays_Tables/`  
**Topics**: Overbrace, arrays, tables, colors, booktabs (14 questions)  
**Compiler**: pdfLaTeX  
**Files**: assignment3_tw_lab.tex

### Assignment 4: Lists, Colors, and Figures
**Location**: `Assignment_4_Lists_Colors_Figures/`  
**Topics**: Lists, RGB/HTML colors, figures, rotation, cropping  
**Compiler**: pdfLaTeX  
**Files**: assignment4_solution.tex, assets/

### Assignment 5: Report and Beamer
**Location**: `Assignment_5_Report_Beamer/`  
**Topics**: Report class, headers/footers, Beamer presentations  
**Compiler**: pdfLaTeX  
**Files**: report/assignment5_report.tex, beamer/assignment5_presentation.tex

### Assignment 6: Fonts, Spacing, and Bibliography
**Location**: `Assignment_6_Document_Structure/`  
**Topics**: XeLaTeX, fontspec, spacing, boxes, index  
**Compiler**: **XeLaTeX** (required)  
**Files**: assignment6_solution.tex, references.bib

### Assignment 7: Doxygen Documentation
**Location**: `Assignment_7_Doxygen/`  
**Topics**: C++ documentation, Doxygen tags, HTML/PDF generation  
**Compiler**: g++ for C++, doxygen for documentation  
**Files**: src/Logger.h, src/CalculationEngine.h, src/main.cpp, Doxyfile

### Assignment 9: Git Branching
**Location**: `Assignment_9_Git_Branching/`  
**Topics**: Git branches, merging, conflicts, stash  
**Tools**: Git  
**Files**: commands.md, exercise_report.md, demo_repository/

## Missing Assignments

**Assignment 2**: Not provided in course materials  
**Assignment 8**: Not provided in course materials

## Quick Start

Each assignment folder contains:
- Complete solution files
- Comprehensive README with instructions
- Compilation commands
- Common errors and solutions
- Related course materials references

## Compilation Quick Reference

### Standard LaTeX
```bash
pdflatex filename.tex
pdflatex filename.tex  # Run twice for references
```

### With BibTeX
```bash
pdflatex filename.tex
bibtex filename
pdflatex filename.tex
pdflatex filename.tex
```

### With XeLaTeX (Assignment 6)
```bash
xelatex filename.tex
bibtex filename
makeindex filename
xelatex filename.tex
xelatex filename.tex
```

### Beamer
```bash
pdflatex presentation.tex
pdflatex presentation.tex
```

### Doxygen
```bash
g++ -std=c++17 src/main.cpp -o demo
doxygen Doxyfile
cd generated_docs/latex && make
```

## Assignment Coverage Matrix

| Assignment | PDF Name | Topics | Status |
|------------|----------|--------|--------|
| 1 | Assignment 1.pdf | LaTeX basics | ✓ Complete |
| 2 | N/A | Not provided | ✗ Missing |
| 3 (Math) | Assignment 3.pdf | Math typesetting | ✓ Complete |
| 3 (TW Lab) | Assignment_3_TW_lab.pdf | Tables (14 Q) | ✓ Complete |
| 4 | Assignment 4.pdf | Lists, colors, figures | ✓ Complete |
| 5 | Assignment 5.pdf | Report & Beamer | ✓ Complete |
| 6 | Assignment 6.pdf | Fonts, XeLaTeX | ✓ Complete |
| 7 | Assignment 7.pdf | Doxygen | ✓ Complete |
| 8 | N/A | Not provided | ✗ Missing |
| 9 | Assignment 9 TW.pdf | Git branching | ✓ Complete |

## Notes

- Assignment 7.pdf internally titled "Assignment 9 - Doxygen"
- Assignment 9 TW.pdf internally titled "Assignment 11 - Git Branching"
- Both numbering systems are documented in each assignment

## Getting Help

1. Read the assignment's README.md
2. Check course PDFs in `00_Source_Material/PDFs/`
3. Review topic notes in `02_LaTeX/`, `03_Beamer/`, `04_Git_and_GitHub/`, etc.
4. Consult cheatsheets in `08_Reference_Cheatsheets/`
