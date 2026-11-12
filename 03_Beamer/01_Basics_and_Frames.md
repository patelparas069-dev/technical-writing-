# Beamer Basics and Frames

## Beamer Document Structure

### Basic Template

```latex
\documentclass{beamer}
\usetheme{ThemeName}

% Title information
\title{Presentation Title}
\subtitle{Optional Subtitle}
\author{Author Name}
\institute{Institution Name}
\date{\today}

\begin{document}

% Frames go here

\end{document}
```

## Frames (Slides)

### Basic Frame

```latex
\begin{frame}{Frame Title}
  Content here
\end{frame}
```

### Frame Without Title

```latex
\begin{frame}
  Content without title
\end{frame}
```

### Title Slide

```latex
\begin{frame}
  \titlepage
\end{frame}
```

## Frame Options

### Fragile Frames

For verbatim or complex content:
```latex
\begin{frame}[fragile]{Code Example}
  \begin{verbatim}
  def hello():
      print("Hello")
  \end{verbatim}
\end{frame}
```

### Plain Frames

No header/footer:
```latex
\begin{frame}[plain]
  Content with no decorations
\end{frame}
```

### Allowframebreaks

Auto-split long content:
```latex
\begin{frame}[allowframebreaks]{Long Content}
  Lots of content that may span multiple slides
\end{frame}
```

## Table of Contents

### Automatic TOC

```latex
\begin{frame}{Outline}
  \tableofcontents
\end{frame}
```

### TOC Before Each Section

```latex
\AtBeginSection{
  \begin{frame}{Outline}
    \tableofcontents[currentsection]
  \end{frame}
}
```

## Sections

Organize presentation:
```latex
\section{Introduction}
\begin{frame}{First Slide}
  ...
\end{frame}

\section{Methods}
\begin{frame}{Methodology}
  ...
\end{frame}
```

Sections appear in navigation but aren't slides themselves.

## Frame Titles

### Subtitle

```latex
\begin{frame}{Main Title}{Subtitle}
  Content
\end{frame}
```

### Without Automatic Title

```latex
\begin{frame}
  \frametitle{Custom Title}
  \framesubtitle{Custom Subtitle}
  Content
\end{frame}
```

## Complete Example

See Assignment 5 beamer solution for full working example.
