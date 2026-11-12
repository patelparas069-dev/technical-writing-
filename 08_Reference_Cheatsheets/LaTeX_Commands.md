# LaTeX Commands Cheat Sheet

Essential LaTeX commands for quick reference.

## Document Structure

```latex
\documentclass[options]{class}    % article, report, book, beamer
\usepackage{package}              % Load package
\begin{document}                  % Start document body
\end{document}                    % End document

\title{Title}                     % Set title
\author{Name}                     % Set author
\date{\today}                     % Set date
\maketitle                        % Create title page

\tableofcontents                  % Generate TOC
\listoffigures                    % List of figures
\listoftables                     % List of tables
```

## Sectioning

```latex
\part{Part Title}                 % Part (book/report)
\chapter{Chapter}                 % Chapter (book/report only)
\section{Section}                 % Section
\subsection{Subsection}           % Subsection
\subsubsection{Subsubsection}     % Subsubsection
\paragraph{Paragraph}             % Paragraph heading
\subparagraph{Subparagraph}       % Subparagraph heading

\section*{Unnumbered}             % Unnumbered section
\label{sec:intro}                 % Label for reference
\ref{sec:intro}                   % Reference
\pageref{sec:intro}               % Page reference
```

## Text Formatting

```latex
\textbf{bold}                     % Bold
\textit{italic}                   % Italic
\underline{underlined}            % Underline
\texttt{monospace}                % Monospace/typewriter
\textsf{sans serif}               % Sans serif
\emph{emphasized}                 % Emphasis (usually italic)

\tiny                             % Smallest
\scriptsize                       % Script size
\footnotesize                     % Footnote size
\small                            % Small
\normalsize                       % Normal (default)
\large                            % Large
\Large                            % Larger
\LARGE                            % Even larger
\huge                             % Huge
\Huge                             % Largest
```

## Lists

```latex
\begin{itemize}                   % Bulleted list
  \item First item
  \item Second item
\end{itemize}

\begin{enumerate}                 % Numbered list
  \item First
  \item Second
\end{enumerate}

\begin{description}               % Description list
  \item[Term] Definition
\end{description}
```

## Spacing

```latex
\\                                % Line break
\newline                          % Line break
\newpage                          % Page break
\clearpage                        % Page break + flush floats

\vspace{1cm}                      % Vertical space
\hspace{2cm}                      % Horizontal space
\quad                             % 1em space
\qquad                            % 2em space
\smallskip                        % Small skip
\medskip                          % Medium skip
\bigskip                          % Big skip
```

## Special Characters

```latex
\#  \$  \%  \&  \_                % Escaped special chars
\{  \}  \textbackslash            % Braces and backslash
\~{}  \^{}                        % Tilde and caret
```

## Cross-References

```latex
\label{marker}                    % Create label
\ref{marker}                      % Reference number
\pageref{marker}                  % Page number
\eqref{marker}                    % Equation reference (with parens)
```

## Footnotes and Margin Notes

```latex
\footnote{text}                   % Footnote
\marginpar{text}                  % Margin note
```

## Boxes

```latex
\mbox{text}                       % Non-breaking box
\fbox{text}                       % Framed box
\parbox{width}{text}              % Paragraph box
\begin{minipage}{width}           % Minipage environment
  content
\end{minipage}
```

## Environments

```latex
\begin{environment}
  content
\end{environment}

% Common environments:
% center, flushleft, flushright
% quote, quotation, verse
% verbatim
% figure, table
% equation, align, gather
```

## Including Files

```latex
\input{file}                      % Include file content
\include{file}                    % Include with page break
\includegraphics[options]{file}   % Include image
```

## Comments

```latex
% Single line comment
```

## Page Styles

```latex
\pagestyle{style}                 % plain, empty, headings, myheadings
\thispagestyle{style}             % For current page only
```

## Quick Document Template

```latex
\documentclass[12pt,a4paper]{article}
\usepackage[margin=1in]{geometry}
\usepackage{amsmath}
\usepackage{graphicx}

\title{Document Title}
\author{Your Name}
\date{\today}

\begin{document}
\maketitle

\section{Introduction}
Content here.

\end{document}
```

## Common Packages

```latex
\usepackage{amsmath}              % Math support
\usepackage{graphicx}             % Images
\usepackage{xcolor}               % Colors
\usepackage{hyperref}             % Hyperlinks
\usepackage{geometry}             % Page layout
\usepackage{fancyhdr}             % Headers/footers
\usepackage{natbib}               % Citations
```

See other cheatsheets for specific topics (math, tables, figures, etc.)
