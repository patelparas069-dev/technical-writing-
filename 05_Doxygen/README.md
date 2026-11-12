# Doxygen - Source Code Documentation

Complete guide to documenting C++ code with Doxygen, based on Assignment 7 and Doxygen.pdf.

## What is Doxygen?

Doxygen is a documentation generator that creates documentation from annotated source code. It supports C++, C, Java, Python, and other languages.

**Output formats**:
- HTML (browsable documentation)
- LaTeX/PDF (printable documentation)
- RTF, XML, and more

## Quick Start

### Installation
```bash
# Ubuntu/Debian
sudo apt install doxygen

# macOS
brew install doxygen

# Windows
# Download from https://www.doxygen.nl/
```

### Basic Workflow
1. Add documentation comments to source code
2. Create Doxyfile configuration
3. Run `doxygen Doxyfile`
4. View generated HTML documentation

## Documentation Comment Styles

### JavaDoc Style (recommended)
```cpp
/**
 * @brief Brief description
 * @details Detailed description
 * @param name Parameter description
 * @return Return value description
 */
```

### Qt Style
```cpp
/*!
 * \brief Brief description
 * \param name Parameter description
 */
```

### Single-line
```cpp
/// Brief description
```

## Essential Tags

| Tag | Purpose | Example |
|-----|---------|---------|
| `@brief` | Short description | `@brief Calculates sum` |
| `@details` | Detailed description | `@details Uses fast algorithm` |
| `@param` | Parameter | `@param x Input value` |
| `@return` | Return value | `@return Sum of inputs` |
| `@throws` | Exception | `@throws std::invalid_argument` |
| `@file` | Document file | `@file utils.h` |
| `@class` | Document class | `@class MyClass` |
| `@todo` | TODO note | `@todo Optimize performance` |
| `@mainpage` | Main page | `@mainpage Project Overview` |
| `@enum` | Document enum | `@enum Status` |

## Complete Example

See **Assignment 7** for full working C++ project with:
- `Logger.h` - Documented header file
- `CalculationEngine.h` - Class with all tags
- `main.cpp` - Entry point with @mainpage
- `Doxyfile` - Configuration file

## Doxyfile Configuration

### Generate Doxyfile
```bash
doxygen -g          # Creates default Doxyfile
```

### Essential Settings
```ini
PROJECT_NAME = "My Project"
INPUT = src
FILE_PATTERNS = *.h *.cpp
RECURSIVE = YES
GENERATE_HTML = YES
GENERATE_LATEX = YES
EXTRACT_ALL = YES
EXTRACT_PRIVATE = YES
```

## Generate Documentation

### HTML Documentation
```bash
doxygen Doxyfile
# Opens generated_docs/html/index.html
```

### PDF Documentation
```bash
doxygen Doxyfile
cd generated_docs/latex
make
# Creates refman.pdf
```

## Documentation Best Practices

1. **Document public API first**: What users need
2. **Brief descriptions**: One sentence
3. **Detail complex behavior**: Algorithms, edge cases
4. **Document all parameters**: Input, output, in/out
5. **Specify exceptions**: What can be thrown
6. **Use TODO tags**: Track future work
7. **Include examples**: Usage patterns
8. **Group related items**: @defgroup

## Related Materials

- **Assignment 7**: Complete documented C++ project
- **Doxygen.pdf**: Full course lecture
- **Cheat sheet**: `08_Reference_Cheatsheets/Doxygen_Commands.md`

## Additional Resources

- Official documentation: https://www.doxygen.nl/manual/
- Doxygen online: https://doxygen.nl/
- Example projects with Doxygen on GitHub

For complete project structure and all tags in action, see Assignment 7.
