# Beamer - LaTeX Presentations

Complete guide to creating presentations with the Beamer document class.

## What is Beamer?

Beamer is a LaTeX document class for creating presentation slides. It produces PDF slides that can be projected or shared, combining LaTeX's typesetting power with presentation capabilities.

### Why Use Beamer?

**Advantages**:
- Same LaTeX syntax for documents and presentations
- Professional, consistent appearance
- Excellent mathematical formula support
- Version control friendly (plain text)
- Reusable content from papers
- No dependency on proprietary software

**Best for**:
- Academic presentations
- Technical talks with equations
- Research presentations
- Teaching materials

## Basic Structure

### Minimal Beamer Document

```latex
\documentclass{beamer}

\title{My Presentation}
\author{Your Name}
\date{\today}

\begin{document}

\begin{frame}
  \titlepage
\end{frame}

\begin{frame}{First Slide}
  Content here
\end{frame}

\end{document}
```

## Detailed Topics

### 1. Basics and Frames
See: `01_Basics_and_Frames.md`
- Document structure
- Frame creation
- Title slide
- Frame options

### 2. Themes, Layout, and Columns
See: `02_Themes_Layout_and_Columns.md`
- Built-in themes
- Color themes
- Layout customization
- Two-column layouts

### 3. Blocks, Lists, and Overlays
See: `03_Blocks_Lists_and_Overlays.md`
- Block environments
- Bullet points and numbering
- Pause and overlay specifications
- Incremental reveals

### 4. Complete Example
See: `04_Complete_Example.tex`
- Full presentation with all features
- Ready to compile

## Quick Start Example

```latex
\documentclass{beamer}
\usetheme{Madrid}

\title{Introduction to Beamer}
\subtitle{Creating Presentations with LaTeX}
\author{Student Name}
\institute{MNIT Jaipur}
\date{\today}

\begin{document}

% Title slide
\begin{frame}
  \titlepage
\end{frame}

% Content slide
\begin{frame}{Why Beamer?}
  \begin{itemize}
    \item Professional appearance
    \item LaTeX math support
    \item Version control friendly
  \end{itemize}
\end{frame}

% Slide with blocks
\begin{frame}{Key Concepts}
  \begin{block}{Definition}
    A frame is a single slide.
  \end{block}
  
  \begin{example}
    This is an example block.
  \end{example}
\end{frame}

% Slide with columns
\begin{frame}{Two Columns}
  \begin{columns}
    \column{0.5\textwidth}
      Left column content
    \column{0.5\textwidth}
      Right column content
  \end{columns}
\end{frame}

\end{document}
```

## Popular Themes

| Theme | Style |
|-------|-------|
| Madrid | Professional, red/white |
| Berlin | Blue sidebar |
| Copenhagen | Blue header |
| Singapore | Minimal, white |
| Warsaw | Blue gradient |
| CambridgeUS | Red, classic |

Change theme:
```latex
\usetheme{Berlin}
```

## Compilation

```bash
pdflatex presentation.tex
pdflatex presentation.tex  # Run twice for navigation
```

## Related Materials

- **Assignment 5**: Complete Beamer example
- **Examples folder**: Additional presentations
- **Lecture PDFs**: LatexL2.pdf covers presentations

## Best Practices

1. **One idea per slide**: Don't overcrowd
2. **Minimal text**: 6-8 lines maximum
3. **Large fonts**: Readable from back of room
4. **High contrast**: Dark text on light background
5. **Consistent theme**: Don't mix styles
6. **Practice timing**: ~2 minutes per slide

## Tips

- Use `\pause` for incremental reveals
- Hide navigation symbols: `\setbeamertemplate{navigation symbols}{}`
- Handout mode: `\documentclass[handout]{beamer}`
- Notes: `\note{Speaker notes here}`

## Next Steps

1. Read section guides in order
2. Compile the complete example
3. Modify for your own presentation
4. Review Assignment 5 Beamer solution
