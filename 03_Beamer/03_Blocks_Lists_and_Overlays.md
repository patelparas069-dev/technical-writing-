# Blocks, Lists, and Overlays

## Block Environments

### Standard Block

```latex
\begin{block}{Block Title}
  Block content here
\end{block}
```

### Alert Block

```latex
\begin{alertblock}{Important}
  Important information
\end{alertblock}
```

### Example Block

```latex
\begin{exampleblock}{Example}
  Example content
\end{exampleblock}
```

### Theorem/Proof

```latex
\begin{theorem}
  Statement of theorem
\end{theorem}

\begin{proof}
  Proof of theorem
\end{proof}
```

## Lists

### Itemize (Bullets)

```latex
\begin{itemize}
  \item First point
  \item Second point
  \item Third point
\end{itemize}
```

### Enumerate (Numbers)

```latex
\begin{enumerate}
  \item First item
  \item Second item
  \item Third item
\end{enumerate}
```

### Description

```latex
\begin{description}
  \item[Term 1] Definition
  \item[Term 2] Definition
\end{description}
```

## Overlays and Animation

### Pause Command

```latex
\begin{frame}{Incremental Reveal}
  First item
  \pause
  Second item (appears after click)
  \pause
  Third item (appears after another click)
\end{frame}
```

### Overlay Specifications

```latex
\begin{frame}{Advanced Overlays}
  \begin{itemize}
    \item<1-> Appears on slide 1 and later
    \item<2-> Appears on slide 2 and later
    \item<3-> Appears on slide 3 and later
  \end{itemize}
\end{frame}
```

### Specific Slides

```latex
\item<1> Only on slide 1
\item<2-4> On slides 2, 3, 4
\item<3,5> On slides 3 and 5 only
```

### Alert on Specific Slides

```latex
\alert<2>{This text is alerted on slide 2}
```

### Color on Specific Slides

```latex
\color<2>{red}{Text red on slide 2}
```

## Combining Features

```latex
\begin{frame}{Complex Example}
  \begin{block}<1->{First Block}
    Visible from slide 1
  \end{block}
  
  \begin{alertblock}<2->{Alert}
    Appears on slide 2
  \end{alertblock}
  
  \begin{itemize}
    \item<3-> Item 1
    \item<4-> Item 2
  \end{itemize}
\end{frame}
```

## Tips

- Don't overuse animations
- Pause between major points
- Keep reveals logical
- Test timing in presentation mode

See Assignment 5 Beamer for practical examples.
