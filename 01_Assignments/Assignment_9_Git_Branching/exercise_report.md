# Git Branching Exercise Report

Detailed report documenting each step of the Git branching exercise with objectives, commands, and observations.

---

## Exercise 1: Inspect HEAD

### Objective
Understand the current state of the repository and what HEAD represents.

### Commands
```bash
git log --oneline
git status
```

### What These Commands Do
- `git log --oneline`: Displays commit history in compact format (one line per commit)
- `git status`: Shows current branch and working directory state

### Expected Observation
- Currently on `main` (or `master`) branch
- HEAD points to the latest commit on current branch
- Working directory is clean (no uncommitted changes)

### Terminal Output
```
[Insert your terminal screenshot here]

Example output:
abc1234 Add project description
def5678 Initial dot-product implementation

On branch main
nothing to commit, working tree clean
```

### Explanation
HEAD is a special pointer that indicates which commit (and branch) you're currently on. When you make a new commit, HEAD moves forward automatically.

---

## Exercise 2: Create Branch `fast`

### Objective
Create a new branch named `fast` for developing a faster algorithm.

### Commands
```bash
git branch fast
git branch
```

### What These Commands Do
- `git branch fast`: Creates a new branch pointer at the current commit
- `git branch`: Lists all branches, with `*` marking the current branch

### Expected Observation
- New branch `fast` created
- Still on `main` branch (HEAD didn't move)
- Both `main` and `fast` point to the same commit

### Terminal Output
```
[Insert your terminal screenshot here]

Example output:
  fast
* main
```

### Explanation
Creating a branch is lightweight - Git just creates a new pointer to the current commit. The branch doesn't contain any code; it's just a movable reference.

---

## Exercise 3: Rename Branch `fast` to `parallel`

### Objective
Rename the branch to better describe its purpose (parallel processing).

### Commands
```bash
git branch -m fast parallel
git branch
```

### What These Commands Do
- `git branch -m fast parallel`: Renames branch from `fast` to `parallel`
- `git branch`: Confirms the rename

### Expected Observation
- Branch `fast` no longer exists
- Branch `parallel` now appears in list
- Still on `main` branch

### Terminal Output
```
[Insert your terminal screenshot here]

Example output:
* main
  parallel
```

### Explanation
The `-m` flag stands for "move/rename". This operation is instantaneous as Git just renames the branch reference file.

---

## Exercise 4: Switch to `parallel` Branch

### Objective
Move to the `parallel` branch to work on the parallel implementation.

### Commands
```bash
git checkout parallel
git status
git branch
```

### What These Commands Do
- `git checkout parallel`: Switches HEAD to point to the `parallel` branch
- `git status`: Confirms current branch
- `git branch`: Shows `*` next to current branch

### Expected Observation
- HEAD now points to `parallel` branch
- Working directory unchanged (same files)
- `*` marker moved to `parallel` in branch list

### Terminal Output
```
[Insert your terminal screenshot here]

Example output:
Switched to branch 'parallel'

On branch parallel
nothing to commit, working tree clean

  main
* parallel
```

### Explanation
`git checkout` updates HEAD and refreshes the working directory to match the target branch. Modern Git also provides `git switch parallel` for the same operation.

---

## Exercise 5: Add Parallel Algorithm on `parallel` Branch

### Objective
Implement a parallel version of the dot product algorithm.

### Commands
```bash
# Modify vecadd.py to add parallel implementation
git add vecadd.py
git commit -m "Add parallel dot-product implementation"
git log --oneline
```

### What These Commands Do
- `git add vecadd.py`: Stages the modified file
- `git commit -m "..."`: Creates commit with message
- `git log --oneline`: Shows commit history including new commit

### Expected Observation
- New commit created on `parallel` branch
- `parallel` branch pointer moved forward
- `main` branch pointer unchanged (still at previous commit)

### Terminal Output
```
[Insert your terminal screenshot here]

Example output:
[parallel abc9876] Add parallel dot-product implementation
 1 file changed, 30 insertions(+), 5 deletions(-)

abc9876 Add parallel dot-product implementation
def5678 Add project description
ghi1234 Initial dot-product implementation
```

### Explanation
The commit is created only on the `parallel` branch. The `main` branch doesn't know about this commit yet. The two branches have now diverged.

---

## Exercise 6: Bug Fix on `main`/`master` Branch

### Objective
Switch to main branch and fix a bug (add input validation).

### Commands
```bash
git checkout main
git status
# Modify vecadd.py to add validation
git add vecadd.py
git commit -m "Validate vector lengths in dot product"
git log --oneline --all --graph
```

### What These Commands Do
- `git checkout main`: Switch back to main branch
- `git add` and `git commit`: Stage and commit the bug fix
- `git log --oneline --all --graph`: Visualize divergent history

### Expected Observation
- On `main` branch, the parallel implementation is NOT present
- New commit created on `main`
- History graph shows two separate branches
- `main` and `parallel` have diverged from common ancestor

### Terminal Output
```
[Insert your terminal screenshot here]

Example output:
* jkl4567 (HEAD -> main) Validate vector lengths in dot product
| * abc9876 (parallel) Add parallel dot-product implementation
|/  
* def5678 Add project description
* ghi1234 Initial dot-product implementation
```

### Explanation
Both branches have modified the same function (`dot_product`) in different ways. This sets up an intentional merge conflict.

---

## Exercise 7: Merge `parallel` into `main`

### Objective
Integrate the parallel implementation into the main branch.

### Commands
```bash
git merge parallel
```

### What This Command Does
Attempts to merge commits from `parallel` branch into current branch (`main`)

### Expected Observation
**Merge conflict!** Git cannot automatically merge because both branches modified the same lines.

### Terminal Output
```
[Insert your terminal screenshot here]

Example output:
Auto-merging vecadd.py
CONFLICT (content): Merge conflict in vecadd.py
Automatic merge failed; fix conflicts and then commit the result.
```

### Explanation
A merge conflict occurs when:
1. Two branches modify the same file
2. Changes overlap or affect the same lines
3. Git cannot determine which version to keep

Git pauses the merge and asks you to resolve conflicts manually.

---

## Exercise 8: Inspect and Resolve Merge Conflict

### Objective
Understand conflict markers and manually resolve the conflict.

### Commands
```bash
git status
# View conflict markers in vecadd.py
# Edit vecadd.py to resolve conflict
git add vecadd.py
git commit -m "Resolve merge conflict between main and parallel"
git status
git log --oneline --all --graph
```

### What These Commands Do
- `git status`: Shows conflicted files (both modified)
- Edit file: Remove conflict markers, keep desired code
- `git add`: Mark conflict as resolved
- `git commit`: Complete the merge with merge commit

### Conflict Markers Explained
```python
<<<<<<< HEAD
# Code from current branch (main)
def dot_product(a, b):
    if len(a) != len(b):
        raise ValueError("Vectors must have the same length")
    return sum(a[i] * b[i] for i in range(len(a)))
=======
# Code from branch being merged (parallel)
def dot_product(a, b):
    return parallel_dot_product(a, b)
>>>>>>> parallel
```

### Resolution Strategy
Keep **both** changes:
- Validation from `main` branch
- Parallel implementation call from `parallel` branch

Final resolved code:
```python
def dot_product(a, b):
    if len(a) != len(b):
        raise ValueError("Vectors must have the same length")
    return parallel_dot_product(a, b)
```

### Expected Observation
- Conflict markers completely removed
- File contains both desired changes
- Working directory clean after commit
- New merge commit created

### Terminal Output
```
[Insert your terminal screenshot here]

Example output:
On branch main
You have unmerged paths.
  (fix conflicts and run "git commit")

Unmerged paths:
  (use "git add <file>..." to mark resolution)
        both modified:   vecadd.py

[After resolution]
[main mno7890] Resolve merge conflict between main and parallel

*   mno7890 (HEAD -> main) Resolve merge conflict between main and parallel
|\  
| * abc9876 (parallel) Add parallel dot-product implementation
* | jkl4567 Validate vector lengths in dot product
|/  
* def5678 Add project description
* ghi1234 Initial dot-product implementation
```

### Explanation
The merge commit (mno7890) has **two parents**: one from `main` and one from `parallel`. This is called a **three-way merge**. The graph shows how the two branches merged back together.

---

## Exercise 9: Delete Merged Branch

### Objective
Clean up by deleting the `parallel` branch since it's been merged.

### Commands
```bash
git branch -d parallel
git branch
```

### What These Commands Do
- `git branch -d parallel`: Safely delete merged branch
- `git branch`: Confirm deletion

### Expected Observation
- `parallel` branch deleted
- Only `main` branch remains
- All commits from `parallel` are preserved in history

### Terminal Output
```
[Insert your terminal screenshot here]

Example output:
Deleted branch parallel (was abc9876).

* main
```

### Explanation
The `-d` flag is safe: Git refuses to delete if the branch isn't merged. Use `-D` to force delete (careful - can lose commits!). The commits from `parallel` are still in the repository; only the branch pointer is removed.

---

## Exercise 10: Explore `git stash`

### Objective
Learn to temporarily save uncommitted changes.

### Commands
```bash
git help stash
echo "temporary change" >> README.md
git status
git stash
git stash list
git status
git stash pop
git status
```

### What These Commands Do
- `git help stash`: Display stash documentation
- `git stash`: Save uncommitted changes to stash
- `git stash list`: Show all stashed changes
- `git stash pop`: Apply and remove most recent stash

### Expected Observation
1. File modified (shown in `git status`)
2. After `git stash`: working directory clean
3. `git stash list` shows saved changes
4. After `git stash pop`: changes restored

### Terminal Output
```
[Insert your terminal screenshot here]

Example output:
On branch main
Changes not staged for commit:
  modified:   README.md

Saved working directory and index state WIP on main: mno7890 Resolve merge conflict

stash@{0}: WIP on main: mno7890 Resolve merge conflict

On branch main
nothing to commit, working tree clean

Dropped refs/stash@{0} (pqr1234...)

On branch main
Changes not staged for commit:
  modified:   README.md
```

### Explanation
`git stash` is useful when:
- You need to switch branches but have uncommitted changes
- You want to pull changes but have local modifications
- You want to temporarily set aside work

**Differences**:
- `git stash pop`: Apply stash and remove from list
- `git stash apply`: Apply stash but keep in list
- `git stash drop`: Delete stash without applying

---

## Summary of Concepts

### Branch Concepts
1. **HEAD**: Pointer to current branch
2. **Branch**: Movable pointer to a commit
3. **Fast-forward merge**: Linear history, no merge commit
4. **Three-way merge**: Divergent history, creates merge commit

### Merge Conflicts
- Occur when same lines modified differently
- Must be resolved manually
- All conflict markers (`<<<<<<<`, `=======`, `>>>>>>>`) must be removed
- Test code after resolving!

### Git Stash
- Temporary storage for uncommitted changes
- Useful for switching contexts
- Can save multiple stashes
- First in, last out (stack)

---

## Troubleshooting Notes

### If merge goes wrong
```bash
git merge --abort    # Cancel merge, return to pre-merge state
```

### If commit was a mistake
```bash
git reset --soft HEAD~1    # Undo commit, keep changes
git reset --hard HEAD~1    # Undo commit, discard changes (dangerous!)
```

### If you forget which branch you're on
```bash
git status              # Always shows current branch
git branch             # Lists all branches with * marking current
```

---

## Assignment Submission Notes

This exercise report should be submitted with:
1. This completed report with all terminal outputs
2. Screenshots of key commands showing actual execution
3. The `demo_repository/` folder with complete Git history
4. `commands.md` with command reference

The repository can be packaged with:
```bash
tar -czf git_exercise.tar.gz demo_repository/
```

Or zipped:
```bash
zip -r git_exercise.zip demo_repository/
```

**Important**: Include the `.git` folder to preserve full history!

---

## Learning Checklist

After completing this exercise, you should be able to:
- [ ] Create and list branches
- [ ] Rename branches
- [ ] Switch between branches
- [ ] Make commits on different branches
- [ ] Understand branch divergence
- [ ] Merge branches
- [ ] Recognize merge conflicts
- [ ] Resolve conflicts manually
- [ ] Complete merge after resolution
- [ ] Delete merged branches
- [ ] Use git stash effectively
- [ ] Visualize history with git log --graph
- [ ] Explain what HEAD is
- [ ] Distinguish between fast-forward and three-way merge

---

**Exercise completed by**: [Your Name]  
**Date**: [Date]  
**Course**: Technical Writing  
**Assignment**: Git Branching Exercise
