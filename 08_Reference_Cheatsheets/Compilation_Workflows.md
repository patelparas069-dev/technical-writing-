# LaTeX Compilation Workflows Cheat Sheet

Quick reference for compiling different types of LaTeX documents.

## Basic Compilation

### Simple Document (no references)
```bash
pdflatex document.tex
```
Run once. Creates `document.pdf`.

### Document with Cross-References
```bash
pdflatex document.tex
pdflatex document.tex  # Run twice
```
First run creates `.aux` file, second resolves references.

## With Bibliography (BibTeX)

### Standard BibTeX Workflow
```bash
pdflatex document.tex      # 1. Create .aux with citations
bibtex document            # 2. Process bibliography
pdflatex document.tex      # 3. Include bibliography
pdflatex document.tex      # 4. Resolve all references
```

**Files created**: `.bbl` (formatted bibliography), `.blg` (log)

**When to use**: Assignments 1, 6; any document with `\bibliography{}`

## With Index (makeindex)

### Standard Index Workflow
```bash
pdflatex document.tex      # 1. Create .idx with index entries
makeindex document         # 2. Process index
pdflatex document.tex      # 3. Include index
pdflatex document.tex      # 4. Resolve references
```

**Files created**: `.ind` (formatted index), `.ilg` (log)

**When to use**: Assignment 6; documents with `\printindex`

## Complete Workflow (Bibliography + Index)

```bash
pdflatex document.tex
bibtex document
makeindex document
pdflatex document.tex
pdflatex document.tex
```

**When to use**: Assignment 6 (has both bibliography and index)

## XeLaTeX Compilation

### Basic XeLaTeX
```bash
xelatex document.tex
xelatex document.tex
```

### XeLaTeX with BibTeX and Index
```bash
xelatex document.tex
bibtex document
makeindex document
xelatex document.tex
xelatex document.tex
```

**When to use**: Assignment 6 (requires XeLaTeX for fontspec)

**Why XeLaTeX**: 
- System font access with `fontspec`
- Better Unicode support
- Required for custom fonts

## Beamer Presentations

```bash
pdflatex presentation.tex
pdflatex presentation.tex  # For navigation
```

**When to use**: Assignment 5 (Beamer)

## Assignment-Specific Workflows

### Assignment 1
```bash
pdflatex assignment1_solution.tex
bibtex assignment1_solution
pdflatex assignment1_solution.tex
pdflatex assignment1_solution.tex
```

### Assignment 3 (Math)
```bash
pdflatex assignment3_math.tex
pdflatex assignment3_math.tex
```

### Assignment 3 (TW Lab)
```bash
pdflatex assignment3_tw_lab.tex
pdflatex assignment3_tw_lab.tex
```

### Assignment 4
```bash
pdflatex assignment4_solution.tex
pdflatex assignment4_solution.tex
```

### Assignment 5 (Report)
```bash
pdflatex assignment5_report.tex
pdflatex assignment5_report.tex
```

### Assignment 5 (Beamer)
```bash
pdflatex assignment5_presentation.tex
pdflatex assignment5_presentation.tex
```

### Assignment 6 (XeLaTeX)
```bash
xelatex assignment6_solution.tex
bibtex assignment6_solution
makeindex assignment6_solution
xelatex assignment6_solution.tex
xelatex assignment6_solution.tex
```

## Editor Integration

### TeXstudio
- **F5** or **F6**: Compile (uses default compiler)
- **F7**: View PDF
- Set default compiler: Options → Configure → Build → Default Compiler

### Command Line Magic Comment
Add at top of `.tex` file:
```latex
% !TeX program = xelatex
% !BIB program = bibtex
```

## Troubleshooting

### "Undefined references"
**Problem**: References showing as `??`  
**Solution**: Run pdflatex again

### "Citation undefined"
**Problem**: Citations showing as `[?]`  
**Solution**: Run full BibTeX workflow

### "No file document.bbl"
**Problem**: Bibliography not found  
**Solution**: Run bibtex, then pdflatex twice

### "Index not generated"
**Problem**: No index in output  
**Solution**: Run makeindex, then pdflatex twice

### "Font not found" (XeLaTeX)
**Problem**: `fontspec` error  
**Solution**: 
- Install required fonts
- Use XeLaTeX, not pdfLaTeX
- Check font name spelling

### Compilation hangs
**Problem**: LaTeX waiting for input  
**Solution**: 
- Check for errors in log
- Press `X` then Enter to exit
- Fix errors and recompile

## Clean Build

### Remove Auxiliary Files
```bash
rm *.aux *.log *.bbl *.blg *.idx *.ilg *.ind *.toc *.out
```

### Keep only source and PDF
```bash
# Keep: .tex, .bib, .pdf, images
# Remove: everything else
```

## Batch Compilation

### Compile all .tex files
```bash
for file in *.tex; do
    pdflatex "$file"
    pdflatex "$file"
done
```

## Makefiles (Advanced)

```makefile
# Simple Makefile
document.pdf: document.tex
	pdflatex document.tex
	pdflatex document.tex

clean:
	rm -f *.aux *.log *.bbl *.blg
```

## Quick Decision Tree

**Need system fonts?** → Use XeLaTeX  
**Have bibliography?** → Run bibtex  
**Have index?** → Run makeindex  
**Have cross-references?** → Run pdflatex twice  
**Just plain document?** → Run pdflatex once

## Common Workflows Summary

| Document Type | Workflow |
|---------------|----------|
| Simple | pdflatex (×1) |
| With refs | pdflatex (×2) |
| With bib | pdflatex, bibtex, pdflatex (×2) |
| With index | pdflatex, makeindex, pdflatex (×2) |
| With both | pdflatex, bibtex, makeindex, pdflatex (×2) |
| XeLaTeX | Replace pdflatex with xelatex |
| Beamer | pdflatex (×2) |

## Tips

- **First compile always fails?** Check for syntax errors
- **Still showing old content?** Delete .aux files and recompile
- **BibTeX errors?** Check .blg log file
- **Index errors?** Check .ilg log file
- **When in doubt**: Full workflow (all tools, twice)
