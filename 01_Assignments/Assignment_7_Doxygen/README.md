# Assignment 7: Doxygen Documentation

Complete C++ project demonstrating source code documentation with Doxygen, including HTML and PDF generation.

## Assignment Overview

**Source**: Assignment 7.pdf (internally titled "Assignment 9 - Doxygen")  
**Topics**: C++ documentation, Doxygen comments, tags, HTML/PDF generation

## Assignment Checklist

- [x] Multi-file C++ project structure
- [x] Logger.h with complete documentation
- [x] CalculationEngine.h with complete documentation
- [x] main.cpp with documentation
- [x] Doxyfile configuration
- [x] All required Doxygen tags demonstrated:
  - [x] @mainpage / \mainpage
  - [x] @file / \file
  - [x] @class / \class
  - [x] @brief / \brief
  - [x] @details / \details
  - [x] @enum
  - [x] Enumerator documentation
  - [x] @param / \param
  - [x] @return / \return
  - [x] @throws / \throws
  - [x] @todo / \todo

## Files

- `src/Logger.h` - Logging utility with documentation
- `src/CalculationEngine.h` - Calculation class with documentation
- `src/main.cpp` - Entry point with documentation
- `Doxyfile` - Doxygen configuration file
- `generated_docs/` - Output directory (generated)

## Important Note

**Missing Source Files**: The assignment mentions that Logger.h, CalculationEngine.h, main.cpp, and a Doxyfile template were supplied by the instructor, but these files were **not included** in the course materials ZIP file.

This solution is a **reconstructed demonstration project** that matches the assignment requirements and illustrates all required Doxygen features. It is clearly labeled as reconstructed, not the original instructor files.

## Key Concepts Demonstrated

### Doxygen Comment Styles

**JavaDoc style** (most common):
```cpp
/**
 * @brief Brief description
 * @details Detailed description
 */
```

**Qt style**:
```cpp
/*!
 * \brief Brief description
 * \details Detailed description
 */
```

**C++ style single-line**:
```cpp
/// Brief description
```

**Note**: `@` and `\` are interchangeable for most Doxygen commands.

### Essential Doxygen Tags

| Tag | Purpose | Example |
|-----|---------|---------|
| `@mainpage` | Main documentation page | `@mainpage Project Title` |
| `@file` | Document a file | `@file Logger.h` |
| `@class` | Document a class | `@class Logger` |
| `@brief` | Short description | `@brief Logs messages` |
| `@details` | Detailed description | `@details Provides filtering...` |
| `@param` | Function parameter | `@param level Severity level` |
| `@return` | Return value | `@return True if successful` |
| `@throws` | Exception specification | `@throws std::invalid_argument` |
| `@todo` | TODO notes | `@todo Add file logging` |
| `@enum` | Document enumeration | `@enum LogLevel` |

### Project Structure

```
Assignment_7_Doxygen/
├── src/
│   ├── Logger.h              # Logging utility
│   ├── CalculationEngine.h   # Calculation engine
│   └── main.cpp              # Program entry point
├── Doxyfile                  # Doxygen configuration
├── generated_docs/           # Generated output (gitignored)
│   ├── html/                 # HTML documentation
│   └── latex/                # LaTeX source for PDF
├── demo                      # Compiled executable
└── README.md
```

## Logger.h Overview

**Purpose**: Threshold-based logging utility

**Features**:
- LogLevel enum with documentation
- Logger class with threshold filtering
- Documented public and private methods
- Inline implementation for demonstration

**Documented elements**:
- File-level documentation
- Enum documentation
- Class documentation
- Constructor documentation
- Public method documentation
- Private helper method documentation

## CalculationEngine.h Overview

**Purpose**: Mathematical calculation engine

**Features**:
- Power function with error handling
- @throws documentation
- @todo documentation
- Parameter and return documentation
- Exception specification

**Documented elements**:
- File-level documentation
- Class documentation
- Constructor with @param
- Method with @param, @return, @throws, @todo

## main.cpp Overview

**Purpose**: Entry point demonstrating usage

**Features**:
- @mainpage for project overview
- @file documentation
- Usage example with error handling

## Doxyfile Configuration

Key settings:

```ini
PROJECT_NAME           = "Technical Writing Doxygen Demo"
PROJECT_BRIEF          = "Documenting a multi-file C++ project"
OUTPUT_DIRECTORY       = generated_docs
INPUT                  = src
FILE_PATTERNS          = *.h *.cpp
RECURSIVE              = YES
EXTRACT_ALL            = YES
EXTRACT_PRIVATE        = YES
GENERATE_HTML          = YES
HTML_OUTPUT            = html
GENERATE_LATEX         = YES
LATEX_OUTPUT           = latex
GENERATE_TREEVIEW      = YES
```

## Compilation Instructions

### 1. Compile the C++ Program

```bash
# Using g++
g++ -std=c++17 -Wall -Wextra -pedantic src/main.cpp -o demo

# Run the program
./demo
```

**Expected output**:
```
[INFO] Power calculation completed.
2^5 = 32
```

### 2. Generate Doxygen Documentation

```bash
# Check Doxygen version
doxygen --version

# Generate documentation
doxygen Doxyfile
```

**Output**:
- `generated_docs/html/index.html` - HTML documentation
- `generated_docs/latex/` - LaTeX source files

### 3. View HTML Documentation

```bash
# Linux
xdg-open generated_docs/html/index.html

# macOS
open generated_docs/html/index.html

# Windows
start generated_docs/html/index.html
```

### 4. Generate PDF Documentation

```bash
cd generated_docs/latex
make

# This creates refman.pdf
```

**Requirements for PDF generation**:
- LaTeX distribution (TeX Live, MiKTeX, MacTeX)
- `pdflatex` command
- `make` utility

## Installation Requirements

### Doxygen

**Ubuntu/Debian**:
```bash
sudo apt update
sudo apt install doxygen
```

**macOS**:
```bash
brew install doxygen
```

**Windows**:
Download from https://www.doxygen.nl/download.html

### C++ Compiler

**Ubuntu/Debian**:
```bash
sudo apt install build-essential
```

**macOS**:
```bash
xcode-select --install
```

**Windows**:
Install MinGW or Visual Studio

### LaTeX (for PDF generation)

**Ubuntu/Debian**:
```bash
sudo apt install texlive-latex-base texlive-latex-extra
```

**macOS**:
```bash
brew install --cask mactex
```

**Windows**:
Install MiKTeX from https://miktex.org/

## Doxygen Configuration Options

### Essential Options

**INPUT**: Source directories to document
```ini
INPUT = src include
```

**FILE_PATTERNS**: Which files to process
```ini
FILE_PATTERNS = *.h *.hpp *.cpp *.cc
```

**RECURSIVE**: Search subdirectories
```ini
RECURSIVE = YES
```

**EXTRACT_ALL**: Document all entities
```ini
EXTRACT_ALL = YES
```

**EXTRACT_PRIVATE**: Include private members
```ini
EXTRACT_PRIVATE = YES
```

**OUTPUT_DIRECTORY**: Where to generate docs
```ini
OUTPUT_DIRECTORY = docs
```

### Output Formats

**HTML**:
```ini
GENERATE_HTML = YES
HTML_OUTPUT = html
```

**LaTeX/PDF**:
```ini
GENERATE_LATEX = YES
LATEX_OUTPUT = latex
```

**RTF** (Rich Text Format):
```ini
GENERATE_RTF = YES
```

**XML**:
```ini
GENERATE_XML = YES
```

### Appearance Options

**PROJECT_NAME**: Appears in documentation
```ini
PROJECT_NAME = "My Project"
```

**PROJECT_BRIEF**: Short description
```ini
PROJECT_BRIEF = "A brief description"
```

**PROJECT_LOGO**: Logo image
```ini
PROJECT_LOGO = logo.png
```

## Documentation Best Practices

### 1. Document Public API First
Focus on what users need to know:
- Public classes and methods
- Parameters and return values
- Exceptions that can be thrown
- Usage examples

### 2. Use @brief for Summaries
Keep brief descriptions to one sentence:
```cpp
/// @brief Calculates factorial of n
```

### 3. Add @details for Complex Functions
Explain algorithms, edge cases, and behavior:
```cpp
/// @details Uses iterative approach. Returns 1 for n <= 0.
```

### 4. Document All Parameters
```cpp
/// @param input The input value to process
/// @param flags Configuration flags (optional)
```

### 5. Specify Return Values
```cpp
/// @return True if successful, false otherwise
```

### 6. Document Exceptions
```cpp
/// @throws std::invalid_argument if input is negative
/// @throws std::overflow_error if result exceeds limits
```

### 7. Use @todo for Future Work
```cpp
/// @todo Optimize for large inputs
/// @todo Add support for complex numbers
```

### 8. Group Related Items
```cpp
/// @defgroup math_functions Mathematical Functions
/// @{

/// @brief Adds two numbers
int add(int a, int b);

/// @brief Subtracts two numbers  
int subtract(int a, int b);

/// @}
```

## Common Errors and Solutions

### Error: "error: cannot open file 'Doxyfile' for reading"
**Solution**: 
- Generate Doxyfile: `doxygen -g`
- Or run doxygen from correct directory

### Warning: "No documentation found for..."
**Solution**: 
- Add documentation comments with /** */
- Enable EXTRACT_ALL = YES in Doxyfile

### HTML files generated but appear broken
**Solution**: 
- Ensure GENERATE_TREEVIEW = YES
- Check HTML_OUTPUT path is correct
- Open index.html, not individual files

### PDF generation fails
**Solution**: 
- Install LaTeX distribution
- Check latex/ directory for make errors
- Run `make` in latex/ directory manually

### Documentation doesn't include private members
**Solution**: 
- Set EXTRACT_PRIVATE = YES in Doxyfile

### Doxygen ignores C++ file
**Solution**: 
- Check FILE_PATTERNS includes *.cpp
- Ensure RECURSIVE = YES if in subdirectory
- Verify INPUT path is correct

## Advanced Doxygen Features

### Markdown Support
Doxygen supports Markdown in documentation:
```cpp
/**
 * @brief Example function
 * 
 * This function demonstrates:
 * - Feature 1
 * - Feature 2
 * 
 * Usage:
 * ```cpp
 * int result = example(5, 10);
 * ```
 */
```

### Cross-References
```cpp
/// @see CalculationEngine::power
/// @sa Logger::log
```

### Code Examples
```cpp
/// @code
/// Logger logger(LogLevel::Info);
/// logger.log(LogLevel::Info, "Message");
/// @endcode
```

### Images
```cpp
/// @image html diagram.png "System Architecture"
/// @image latex diagram.eps "System Architecture" width=10cm
```

## Generated Documentation Structure

### HTML Output
```
html/
├── index.html           # Main page
├── classes.html         # Class list
├── files.html           # File list
├── functions.html       # Function index
├── annotated.html       # Class documentation
└── ...
```

### LaTeX Output
```
latex/
├── refman.tex          # Main LaTeX file
├── Makefile            # Build instructions
├── *.tex               # Generated LaTeX files
└── refman.pdf          # Final PDF (after make)
```

## Related Course Materials

- Doxygen.pdf - Doxygen lecture slides
- Topic Notes: `05_Doxygen/` - Complete Doxygen guide
- Examples: `05_Doxygen/examples/` - Additional examples
- Reference: `08_Reference_Cheatsheets/Doxygen_Commands.md`

## Learning Outcomes

After completing this assignment, you should be able to:
- Write Doxygen-compatible comments in C++
- Use all major Doxygen tags appropriately
- Configure Doxygen with a Doxyfile
- Generate HTML documentation
- Generate PDF documentation
- Document classes, methods, and parameters
- Specify exceptions with @throws
- Add TODO notes with @todo
- Create a mainpage for project overview
- Understand public vs private documentation
- Choose between @ and \ command syntax

## Extension Ideas

1. Add more classes to demonstrate hierarchy
2. Document a namespace
3. Add image diagrams to documentation
4. Create custom groups with @defgroup
5. Add @example tags with usage examples
6. Document template classes and functions
7. Add @deprecated tags for legacy code
8. Create a detailed @mainpage with sections
9. Use @attention or @warning for important notes
10. Generate XML output for custom processing

## Testing Checklist

- [ ] C++ code compiles without errors
- [ ] Program runs and produces expected output
- [ ] Doxygen runs without errors
- [ ] HTML documentation opens in browser
- [ ] All classes appear in class list
- [ ] All documented functions appear
- [ ] Parameters are documented in detail pages
- [ ] Return values are shown
- [ ] Exceptions are documented
- [ ] LaTeX builds successfully (if tested)
- [ ] PDF is readable and complete (if tested)
