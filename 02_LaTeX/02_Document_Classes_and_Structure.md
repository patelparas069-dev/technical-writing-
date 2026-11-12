# Section 2: Document Classes and Structure

Comprehensive guide to LaTeX document classes and structural elements.

## Document Classes Overview

### article Class
- For short documents, papers, and articles
- No `\chapter` command
- Single-sided by default
- Abstract environment available

### report Class
- For longer reports and theses
- Supports `\chapter` command
- Chapters start on new pages
- Abstract environment available

### book Class
- For books and long documents
- Supports `\chapter` command
- Two-sided by default
- Chapters start on odd pages (right side)
- Different headers for even/odd pages

### letter Class
- For formal letters
- Special commands for addresses and signatures

### beamer Class
- For presentations/slides
- Frame-based structure
- See `03_Beamer/` for detailed notes

## Sectioning Commands

### Hierarchy (article)
```latex
\section{Main Section}
\subsection{Subsection}
\subsubsection{Subsubsection}
\paragraph{Paragraph}
\subparagraph{Subparagraph}
```

### Hierarchy (report/book)
```latex
\part{Part Title}            % Highest level (optional)
\chapter{Chapter Title}       % report/book only
\section{Section Title}
\subsection{Subsection Title}
\subsubsection{Subsubsection}
\paragraph{Paragraph}
\subparagraph{Subparagraph}
```

### Unnumbered Sections
```latex
\section*{Unnumbered Section}
\subsection*{Unnumbered Subsection}
```

## Title and Front Matter

### Title Elements
```latex
\title{Document Title \\ Optional Subtitle}
\author{Author Name \and Second Author}
\date{\today}  % or specific date, or \date{} for no date
```

### Creating Title
```latex
\begin{document}
\maketitle
```

### Abstract
```latex
\begin{abstract}
Summary of the document.
\end{abstract}
```

### Table of Contents
```latex
\tableofcontents
```

Automatically generated from section commands. Requires two compilations.

## Complete Examples

See course assignments for full working examples:
- Assignment 1: article class
- Assignment 5: report class
- Assignment 5: beamer class

## Related Topics
- Section 4: Sections, Lists, and Numbering
- Section 5: Page Layout, Headers, Footers

*This section corresponds to Lecture_1_TW.pdf pages 1-15*
