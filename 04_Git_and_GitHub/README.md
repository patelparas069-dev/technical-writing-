# Git and GitHub Comprehensive Guide

Complete guide to Git version control and GitHub collaboration based on Git.pdf (76 pages) and Assignment 9.

## Quick Navigation

1. [Version Control Concepts](01_Version_Control_Concepts.md)
2. [Installation and Configuration](02_Installation_and_Configuration.md)
3. [Basic Workflow](03_Basic_Workflow.md)
4. [Inspecting History](04_Inspecting_History.md)
5. [Branches and Merging](05_Branches_and_Merging.md)
6. [Merge Conflicts](06_Merge_Conflicts.md)
7. [Remote and GitHub](07_Remote_and_GitHub.md)
8. [Collaboration and Pull Requests](08_Collaboration_and_Pull_Requests.md)
9. [Rebase and Stash](09_Rebase_and_Stash.md)
10. [Command Cheat Sheet](10_Command_Cheat_Sheet.md)

## What is Git?

**Git** is a distributed version control system that tracks changes in files and enables collaboration among multiple developers.

**Key features**:
- Complete history of all changes
- Work offline (distributed)
- Branching and merging
- Fast performance
- Data integrity with SHA-1 checksums

## What is GitHub?

**GitHub** is a web-based hosting service for Git repositories, adding:
- Cloud backup
- Collaboration features
- Pull requests for code review
- Issue tracking
- Project management
- GitHub Pages for websites

## Quick Start

### Install Git
```bash
# Ubuntu/Debian
sudo apt install git

# macOS
brew install git

# Windows
# Download from https://git-scm.com/
```

### Configure
```bash
git config --global user.name "Your Name"
git config --global user.email "your@email.com"
```

### Basic Workflow
```bash
git init                    # Initialize repository
git add file.txt            # Stage file
git commit -m "Message"     # Commit changes
git status                  # Check status
git log                     # View history
```

### With GitHub
```bash
git remote add origin URL   # Connect to remote
git push -u origin main     # Push to GitHub
git pull                    # Get updates
git clone URL               # Clone repository
```

## Essential Concepts

### Three Areas
1. **Working Directory**: Your actual files
2. **Staging Area**: Files ready to commit
3. **Repository**: Committed history

### Branch Workflow
```bash
git branch feature          # Create branch
git checkout feature        # Switch to branch
# Make changes and commit
git checkout main           # Switch to main
git merge feature           # Merge changes
```

## Course Integration

- **Assignment 9**: Complete branching exercise
- **Git.pdf**: Full 76-page reference
- **Cheat Sheet**: Quick command reference

## Learning Path

1. Start with basic workflow (init, add, commit)
2. Practice branching and merging
3. Learn conflict resolution
4. Work with GitHub remotes
5. Collaborate with pull requests
6. Master advanced features (rebase, stash)

## Why Learn Git?

**For students**:
- Required skill for software development
- Manage assignment versions
- Collaborate on group projects
- Showcase work on GitHub

**For professionals**:
- Industry standard
- Work on team projects
- Track document versions
- Contribute to open source

## Common Commands

| Command | Purpose |
|---------|---------|
| `git init` | Create repository |
| `git add` | Stage changes |
| `git commit` | Save snapshot |
| `git status` | Check status |
| `git log` | View history |
| `git branch` | Manage branches |
| `git checkout` | Switch branches |
| `git merge` | Combine branches |
| `git push` | Upload to remote |
| `git pull` | Download from remote |

See `10_Command_Cheat_Sheet.md` for complete reference.

## Best Practices

1. **Commit often**: Small, logical chunks
2. **Write good messages**: Describe what and why
3. **Use branches**: Keep main stable
4. **Pull before push**: Stay synchronized
5. **Review before commit**: Check `git diff`
6. **Backup to GitHub**: Push regularly

## Getting Help

```bash
git help <command>          # Detailed help
git <command> --help        # Same as above
git <command> -h            # Brief help
```

## Next Steps

1. Read sections in order
2. Complete Assignment 9 (branching exercise)
3. Practice with demo repository
4. Create GitHub account
5. Host your first project

## Resources

- **Official documentation**: https://git-scm.com/doc
- **GitHub Learning Lab**: https://lab.github.com/
- **Pro Git book (free)**: https://git-scm.com/book
- **GitHub Desktop** (GUI): https://desktop.github.com/
- **Course materials**: Git.pdf in `00_Source_Material/PDFs/`
