# Assignment 9: Git Branching and Merge Conflicts

Complete Git branching exercise demonstrating branch creation, merging, conflict resolution, and stash usage.

## Assignment Overview

**Source**: Assignment 9 TW.pdf (internally titled "Assignment 11 - Git Branching")  
**Topics**: Git branches, merging, conflicts, stash, HEAD

## Exercise Checklist

- [x] Step 1: Inspect HEAD and understand current state
- [x] Step 2: Create branch `fast`
- [x] Step 3: Rename branch `fast` to `parallel`
- [x] Step 4: Switch to `parallel` branch
- [x] Step 5: Add parallel algorithm on `parallel` branch
- [x] Step 6: Bug fix on `main`/`master` branch
- [x] Step 7: Merge `parallel` into `main`
- [x] Step 8: Resolve merge conflict
- [x] Step 9: Delete merged branch
- [x] Step 10: Explore `git stash`

## Files

- `commands.md` - Complete command reference with explanations
- `exercise_report.md` - Detailed step-by-step report
- `demo_repository/` - Working Git repository for demonstration
  - `vecadd.py` - Python program (vector dot product)
  - `README.md` - Repository description

## Key Concepts Demonstrated

### Git Branches

**What is a branch?**
- A movable pointer to a commit
- Allows independent lines of development
- Lightweight (just a 41-byte file)

**HEAD**:
- Pointer to current branch/commit
- Determines what you see in working directory
- Moves when you switch branches

### Branch Operations

**Create branch**:
```bash
git branch branch-name
```

**List branches**:
```bash
git branch              # Local branches
git branch -a           # All branches (local + remote)
```

**Rename branch**:
```bash
git branch -m old-name new-name
```

**Switch branch**:
```bash
git checkout branch-name    # Traditional
git switch branch-name      # Modern (Git 2.23+)
```

**Create and switch**:
```bash
git checkout -b new-branch  # Traditional
git switch -c new-branch    # Modern
```

**Delete branch**:
```bash
git branch -d branch-name   # Safe (checks if merged)
git branch -D branch-name   # Force (deletes unmerged)
```

### Merging

**Types of merges**:

1. **Fast-forward**: No divergent history
   ```
   main:     A---B
                  \
   feature:        C---D
   
   After merge: A---B---C---D (main and feature)
   ```

2. **Three-way merge**: Divergent history
   ```
   main:     A---B---C
                  \   \
   feature:        D---E---M (merge commit)
   ```

**Merge command**:
```bash
git merge branch-name
```

### Merge Conflicts

**When conflicts occur**:
- Same file modified in both branches
- Same lines changed differently
- Git cannot auto-merge

**Conflict markers**:
```
<<<<<<< HEAD
Code from current branch
=======
Code from branch being merged
>>>>>>> branch-name
```

**Resolution steps**:
1. Open conflicted file
2. Find conflict markers
3. Decide what to keep
4. Remove all markers
5. Stage file with `git add`
6. Commit merge with `git commit`

### Git Stash

**Purpose**: Temporarily save uncommitted changes

**Commands**:
```bash
git stash              # Save changes
git stash list         # List stashes
git stash pop          # Apply and remove stash
git stash apply        # Apply but keep stash
git stash drop         # Delete stash
git stash clear        # Delete all stashes
```

**When to use**:
- Switch branches without committing
- Pull changes with dirty working directory
- Temporarily set aside work

## Exercise Overview

### Initial Setup
1. Create repository with initial commit
2. Add project description
3. Inspect state with `git log` and `git status`

### Branching
4. Create `fast` branch
5. Rename to `parallel`
6. Switch to `parallel` branch
7. Verify branch with `git branch` and `git status`

### Divergent Development
8. On `parallel`: implement parallel algorithm
9. On `main`: implement bug fix (validation)
10. Both branches modify same function → conflict

### Merging and Conflicts
11. Merge `parallel` into `main`
12. Resolve conflict (keep both changes)
13. Commit merge
14. Visualize with `git log --graph`

### Cleanup
15. Delete `parallel` branch
16. Verify with `git branch`

### Stash
17. Make temporary changes
18. Stash changes
19. Restore changes with `stash pop`

## Demo Repository Structure

```
demo_repository/
├── .git/              # Git metadata (created by git init)
├── README.md          # Project description
└── vecadd.py          # Python program
```

## vecadd.py Implementation

The assignment uses `vecadd.py` but describes a **dot product** algorithm (not addition).

**Initial version** (sequential):
```python
def dot_product(a, b):
    return sum(x * y for x, y in zip(a, b))
```

**Parallel version** (on `parallel` branch):
```python
def parallel_dot_product(a, b, workers=2):
    # Uses ProcessPoolExecutor to parallelize computation
    # Splits vectors into chunks
    # Computes partial dot products in parallel
    # Sums results
```

**Bug fix** (on `main` branch):
```python
def dot_product(a, b):
    if len(a) != len(b):
        raise ValueError("Vectors must have the same length")
    return sum(a[i] * b[i] for i in range(len(a)))
```

**After merge** (both changes):
- Validation from bug fix
- Parallel implementation from feature branch

## Important Notes

### Intentional Merge Conflict

The exercise is **designed to create a conflict**:
- `parallel` branch changes the `dot_product` function return statement
- `main` branch also changes the same return statement
- Git cannot auto-merge → manual resolution required

### Dual Numbering

- **PDF filename**: Assignment 9 TW.pdf
- **Internal title**: Assignment 11 - Git Branching

Both numbering schemes are preserved in documentation.

### Branch Name (main vs master)

Modern Git uses `main` as default branch name. Older repositories use `master`. The commands work with both:

```bash
git checkout main     # Modern
git checkout master   # Legacy
```

The exercise report uses `main` but notes the alternative.

## Command Summary

### Repository Setup
```bash
git init
git config user.name "Your Name"
git config user.email "your.email@example.com"
git add file.py
git commit -m "Message"
git status
git log
git log --oneline
git log --oneline --all --graph
```

### Branching
```bash
git branch branch-name
git branch
git branch -m old new
git checkout branch-name
git switch branch-name
git branch -d branch-name
```

### Merging
```bash
git merge branch-name
# If conflict:
# 1. Edit conflicted files
# 2. git add conflicted-file
# 3. git commit
```

### Stash
```bash
git stash
git stash list
git stash pop
git stash apply
git stash drop
```

## Common Errors and Solutions

### Error: "fatal: not a git repository"
**Solution**: Run `git init` in project directory

### Error: "Author identity unknown"
**Solution**: Configure user name and email:
```bash
git config user.name "Your Name"
git config user.email "your@email.com"
```

### Error: "error: Your local changes to the following files would be overwritten"
**Solution**: 
- Commit changes
- Or stash changes with `git stash`
- Or discard changes with `git restore file`

### Error: "fatal: refusing to merge unrelated histories"
**Solution**: 
```bash
git merge branch-name --allow-unrelated-histories
```

### Conflict markers still in file after commit
**Solution**: 
- Open file and remove all `<<<<<<<`, `=======`, `>>>>>>>` markers
- Stage file again with `git add`
- Commit with `git commit`

### Cannot delete branch: "error: branch 'X' is not fully merged"
**Solution**: 
- Ensure branch is merged: `git merge branch-name`
- Or force delete (careful!): `git branch -D branch-name`

### Detached HEAD state
**Solution**: 
```bash
git checkout main      # Return to branch
```

## Best Practices

### Branch Naming
- Use descriptive names: `feature/login`, `bugfix/validation`
- Lowercase with hyphens: `add-user-profile`
- Avoid spaces and special characters

### Commit Messages
- Present tense: "Add feature" not "Added feature"
- Imperative mood: "Fix bug" not "Fixes bug"
- First line: brief summary (< 50 chars)
- Blank line, then detailed explanation if needed

### Before Merging
1. Ensure working directory is clean
2. Switch to target branch (usually `main`)
3. Pull latest changes if working with remote
4. Then merge feature branch

### Conflict Resolution
1. Communicate with team about conflicts
2. Understand both changes before deciding
3. Test thoroughly after resolving
4. Never commit conflict markers!

## Advanced Branching

### Viewing Branch History
```bash
git log --oneline --graph --all --decorate
```

### Comparing Branches
```bash
git diff branch1..branch2
git diff branch1...branch2   # Since common ancestor
```

### Checking Out Specific Commit
```bash
git checkout commit-hash
```

### Undo Merge (before push)
```bash
git reset --hard HEAD~1      # Dangerous! Use carefully
```

### Abort Merge in Progress
```bash
git merge --abort
```

## Testing Checklist

- [ ] Repository initialized successfully
- [ ] Initial commits created
- [ ] Branch created and renamed
- [ ] Switched to new branch successfully
- [ ] Changes committed on both branches
- [ ] Merge conflict occurred as expected
- [ ] Conflict resolved correctly
- [ ] All conflict markers removed
- [ ] Merge committed successfully
- [ ] Branch deleted after merge
- [ ] Stash save and restore working
- [ ] Log shows correct graph structure

## Related Course Materials

- Git.pdf - Complete Git lecture (76 pages)
- Topic Notes: `04_Git_and_GitHub/` - Comprehensive Git guide
- Reference: `08_Reference_Cheatsheets/Git_Commands.md`

## Learning Outcomes

After completing this assignment, you should be able to:
- Understand what branches are and how they work
- Create, rename, and delete branches
- Switch between branches safely
- Understand HEAD and branch pointers
- Recognize when merge conflicts occur
- Read and understand conflict markers
- Resolve merge conflicts manually
- Use git stash for temporary changes
- Visualize branch history with log
- Understand fast-forward vs three-way merge
- Know when to use `git branch -d` vs `git branch -D`
- Distinguish between `git merge` and `git rebase`

## Extension Ideas

1. Create multiple feature branches simultaneously
2. Practice cherry-picking commits between branches
3. Use `git rebase` instead of merge
4. Create and merge with pull requests (GitHub)
5. Practice resolving more complex conflicts
6. Use `git bisect` to find bugs
7. Create tags for releases
8. Work with remote branches
9. Practice interactive rebase to clean history
10. Use `git worktree` for multiple checkouts

## Troubleshooting

### Stash not working
- Stash only works on **tracked** files
- Use `git stash -u` to include untracked files
- Use `git stash -a` to include ignored files

### Merge creates unexpected results
- Check `git log --graph` to understand history
- Use `git diff` to compare changes
- Consider `git reset` to undo (before push)

### Branch appears merged but deletion fails
- Check if currently on that branch: `git branch`
- Switch to different branch first
- Ensure changes are actually merged: `git log`

## Safety Reminders

⚠️ **Destructive Commands** (use with caution):
- `git branch -D` - Deletes unmerged branch
- `git reset --hard` - Discards all changes
- `git clean -fd` - Deletes untracked files
- `git push --force` - Overwrites remote history

✅ **Safe Commands** (reversible):
- `git branch -d` - Refuses to delete unmerged
- `git stash` - Saves changes temporarily
- `git commit` - Creates save point
- `git merge` - Can be aborted
