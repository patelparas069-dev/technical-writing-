# Git Command Cheat Sheet

Quick reference for all essential Git commands.

## Setup and Configuration

```bash
git config --global user.name "Your Name"
git config --global user.email "your@email.com"
git config --global --list
git config --global core.editor "vim"
```

## Repository Initialization

```bash
git init                          # Initialize new repo
git clone <url>                   # Clone remote repo
git clone <url> <directory>       # Clone to specific directory
```

## Basic Workflow

```bash
git status                        # Check status
git add <file>                    # Stage specific file
git add .                         # Stage all changes
git commit -m "Message"           # Commit with message
git commit -am "Message"          # Stage and commit tracked files
git diff                          # Show unstaged changes
git diff --staged                 # Show staged changes
git restore <file>                # Discard changes in working directory
git restore --staged <file>       # Unstage file
git rm <file>                     # Remove file
git mv <old> <new>                # Rename file
```

## Viewing History

```bash
git log                           # Full history
git log --oneline                 # Compact history
git log --graph --all             # Visual branch graph
git log --oneline --graph --all   # Compact graph
git show <commit>                 # Show commit details
git show <commit>:<file>          # Show file at commit
```

## Branching

```bash
git branch                        # List branches
git branch <name>                 # Create branch
git branch -m <old> <new>         # Rename branch
git branch -d <name>              # Delete merged branch
git branch -D <name>              # Force delete branch
git checkout <branch>             # Switch branch
git checkout -b <branch>          # Create and switch
git switch <branch>               # Switch branch (modern)
git switch -c <branch>            # Create and switch (modern)
```

## Merging

```bash
git merge <branch>                # Merge branch into current
git merge --no-ff <branch>        # Force merge commit
git merge --abort                 # Abort merge
```

## Remote Repositories

```bash
git remote                        # List remotes
git remote -v                     # List with URLs
git remote add <name> <url>       # Add remote
git remote remove <name>          # Remove remote
git remote rename <old> <new>     # Rename remote
git fetch                         # Fetch from remote
git fetch <remote>                # Fetch from specific remote
git pull                          # Fetch and merge
git pull <remote> <branch>        # Pull specific branch
git push                          # Push to remote
git push -u <remote> <branch>     # Push and set upstream
git push --all                    # Push all branches
git push --tags                   # Push all tags
```

## Stashing

```bash
git stash                         # Stash changes
git stash save "message"          # Stash with message
git stash list                    # List stashes
git stash show                    # Show stash diff
git stash pop                     # Apply and remove stash
git stash apply                   # Apply but keep stash
git stash drop                    # Delete stash
git stash clear                   # Delete all stashes
git stash -u                      # Include untracked files
```

## Rebase

```bash
git rebase <branch>               # Rebase onto branch
git rebase --continue             # Continue after resolving
git rebase --abort                # Abort rebase
git rebase -i <commit>            # Interactive rebase
```

## Tagging

```bash
git tag                           # List tags
git tag <name>                    # Create lightweight tag
git tag -a <name> -m "message"    # Create annotated tag
git tag -d <name>                 # Delete tag
git push origin <tag>             # Push tag
git push --tags                   # Push all tags
```

## Inspection and Comparison

```bash
git diff <branch1>..<branch2>     # Diff between branches
git diff <commit1> <commit2>      # Diff between commits
git log <branch1>..<branch2>      # Commits in branch2 not in branch1
git blame <file>                  # Show who changed each line
```

## Undoing Changes

```bash
git restore <file>                # Discard working directory changes
git restore --staged <file>       # Unstage file
git reset HEAD~1                  # Undo last commit, keep changes
git reset --soft HEAD~1           # Undo commit, keep staged
git reset --hard HEAD~1           # Undo commit, discard changes (DANGEROUS!)
git revert <commit>               # Create new commit undoing changes
git clean -n                      # Preview untracked file removal
git clean -f                      # Remove untracked files
git clean -fd                     # Remove untracked files and directories
```

## GitHub Specific

```bash
# Clone
git clone https://github.com/user/repo.git

# Fork workflow
git remote add upstream <original-repo-url>
git fetch upstream
git merge upstream/main

# Pull request from command line (with gh CLI)
gh pr create
gh pr list
gh pr checkout <number>
```

## Advanced

```bash
git cherry-pick <commit>          # Apply specific commit
git bisect start                  # Start binary search for bug
git bisect good <commit>          # Mark commit as good
git bisect bad <commit>           # Mark commit as bad
git reflog                        # Show reference log
git fsck                          # File system check
```

## Configuration Shortcuts

```bash
# Aliases
git config --global alias.st status
git config --global alias.co checkout
git config --global alias.br branch
git config --global alias.ci commit
git config --global alias.unstage 'restore --staged'
git config --global alias.last 'log -1 HEAD'
git config --global alias.visual 'log --graph --all --oneline --decorate'
```

## Common Workflows

### Feature Branch Workflow
```bash
git checkout -b feature-xyz
# Make changes
git add .
git commit -m "Add feature"
git checkout main
git merge feature-xyz
git branch -d feature-xyz
```

### Fix Merge Conflict
```bash
git merge feature
# CONFLICT! Edit files to resolve
git add <resolved-files>
git commit
```

### Sync Fork with Upstream
```bash
git fetch upstream
git checkout main
git merge upstream/main
git push origin main
```

### Amend Last Commit
```bash
# Fix typo in commit message
git commit --amend -m "Corrected message"

# Add forgotten file
git add forgotten-file.txt
git commit --amend --no-edit
```

## Safety Tips

✓ **Safe commands** (reversible):
- `git add`, `git commit`, `git stash`
- `git branch -d` (refuses if unmerged)
- `git merge` (can abort)

⚠️ **Dangerous commands** (be careful):
- `git reset --hard` (discards changes)
- `git clean -fd` (deletes files)
- `git push --force` (rewrites history)
- `git branch -D` (deletes unmerged branch)

## Quick Reference Card

| Action | Command |
|--------|---------|
| Initialize | `git init` |
| Stage all | `git add .` |
| Commit | `git commit -m "msg"` |
| Status | `git status` |
| History | `git log --oneline` |
| Create branch | `git branch name` |
| Switch branch | `git checkout name` |
| Merge | `git merge name` |
| Clone | `git clone url` |
| Push | `git push origin main` |
| Pull | `git pull` |
| Stash | `git stash` |
| Unstash | `git stash pop` |

## Help

```bash
git help                          # General help
git help <command>                # Command-specific help
git <command> -h                  # Quick command help
```

For complete documentation, see **Git.pdf** in course materials or visit https://git-scm.com/doc
