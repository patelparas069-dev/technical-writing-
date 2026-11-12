# Themes, Layout, and Columns

## Themes

### Presentation Themes

```latex
\usetheme{ThemeName}
```

**Popular themes**:
- **Madrid**: Red/white, professional
- **Berlin**: Blue sidebar navigation
- **Copenhagen**: Blue top bar
- **Singapore**: Minimal, clean
- **Warsaw**: Blue gradient
- **CambridgeUS**: Traditional academic

### Color Themes

```latex
\usecolortheme{ColorName}
```

Options: `seahorse`, `rose`, `orchid`, `whale`, `dolphin`

### Font Themes

```latex
\usefonttheme{FontOption}
```

Options: `serif`, `professionalfonts`, `structurebold`

### Example Combinations

```latex
\usetheme{Madrid}
\usecolortheme{seahorse}
\usefonttheme{professionalfonts}
```

## Columns

### Two-Column Layout

```latex
\begin{frame}{Two Columns}
  \begin{columns}
    \column{0.5\textwidth}
      Left column content
    
    \column{0.5\textwidth}
      Right column content
  \end{columns}
\end{frame}
```

### Unequal Columns

```latex
\begin{columns}
  \column{0.3\textwidth}
    Narrow column
  
  \column{0.7\textwidth}
    Wide column
\end{columns}
```

### Three Columns

```latex
\begin{columns}
  \column{0.33\textwidth}
    Column 1
  \column{0.33\textwidth}
    Column 2
  \column{0.33\textwidth}
    Column 3
\end{columns}
```

### Column with Alignment

```latex
\begin{columns}[t]  % Top align
  \column{0.5\textwidth}
    ...
  \column{0.5\textwidth}
    ...
\end{columns}
```

Options: `[t]` top, `[c]` center, `[b]` bottom

## Layout Customization

### Remove Navigation Symbols

```latex
\setbeamertemplate{navigation symbols}{}
```

### Footer Content

```latex
\setbeamertemplate{footline}[frame number]
```

### Logo

```latex
\logo{\includegraphics[height=1cm]{logo.png}}
```

## Font Sizes

Within frame:
```latex
\tiny
\scriptsize
\footnotesize
\small
\normalsize
\large
\Large
\LARGE
\huge
\Huge
```

See Assignment 5 for complete themed presentation example.
