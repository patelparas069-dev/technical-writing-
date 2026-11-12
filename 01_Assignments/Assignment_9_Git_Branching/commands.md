# Git Branching Commands Reference

Complete command reference for the Git branching exercise.

## Initial Repository Setup

### Create and initialize repository
```bash
mkdir demo_repository
cd demo_repository
git init
```
**Purpose**: Initialize a new Git repository

### Configure user identity
```bash
git config user.name "Student Name"
git config user.email "student@example.com"
```
**Purpose**: Set author information for commits  
**Note**: Use `--global` to set for all repositories, omit for repository-local config

### Create initial file
```bash
# Create vecadd.py with initial dot product implementation
cat > vecadd.py << 'EOF'
def dot_product(a, b):
    return sum(x * y for x, y in zip(a, b))


if __name__ == "__main__":
    x = [1, 2, 3]
    y = [4, 5, 6]
    print("Dot product:", dot_product(x, y))
EOF
```

### Create README
```bash
cat > README.md << 'EOF'
# Vector Operations Demo

This repository demonstrates Git branching concepts using a vector dot product example.
EOF
```

### First commit
```bash
git add vecadd.py README.md
git commit -m "Initial dot-product implementation"
```
**Purpose**: Create first commit with initial files

### Add more content and commit
```bash
echo "This repository demonstrates Git branching." >> README.md
git add README.md
git commit -m "Add project description"
```

## Step 1: Inspect HEAD

### View commit history
```bash
git log --oneline
```
**Purpose**: See list of commits  
**Output**: Short commit hash and message

### Check working directory status
```bash
git status
```
**Purpose**: See current branch and file status  
**Output**: 
- Current branch name
- Whether working directory is clean
- Untracked/modified files (if any)

### What is HEAD?
HEAD is a pointer to the current branch reference, which points to the latest commit on that branch.

```bash
cat .git/HEAD
```
**Output**: `ref: refs/heads/main` (or `master`)

## Step 2: Create Branch

### Create branch 'fast'
```bash
git branch fast
```
**Purpose**: Create new branch pointer at current commit  
**Note**: Does NOT switch to the new branch

### List all branches
```bash
git branch
```
**Purpose**: Show all local branches  
**Output**: List of branches with `*` indicating current branch

Example output:
```
  fast
* main
```

## Step 3: Rename Branch

### Rename 'fast' to 'parallel'
```bash
git branch -m fast parallel
```
**Purpose**: Rename branch  
**Syntax**: `git branch -m <old-name> <new-name>`

### Verify rename
```bash
git branch
```
**Output**:
```
* main
  parallel
```

## Step 4: Switch to Branch

### Switch to 'parallel' branch
```bash
git checkout parallel
```
**Purpose**: Switch HEAD to point to parallel branch  
**Alternative (Git 2.23+)**: `git switch parallel`

### Verify current branch
```bash
git status
```
**Output**: `On branch parallel`

### View branches
```bash
git branch
```
**Output**:
```
  main
* parallel
```
The `*` moved to `parallel`

## Step 5: Add Parallel Algorithm

### Modify vecadd.py on parallel branch
```bash
cat > vecadd.py << 'EOF'
from concurrent.futures import ProcessPoolExecutor


def _partial_dot(args):
    a_part, b_part = args
    return sum(x * y for x, y in zip(a_part, b_part))


def parallel_dot_product(a, b, workers=2):
    if len(a) != len(b):
        raise ValueError("Vectors must have the same length")
    if not a:
        return 0

    workers = max(1, min(workers, len(a)))
    chunk_size = (len(a) + workers - 1) // workers
    chunks = []
    for start in range(0, len(a), chunk_size):
        end = start + chunk_size
        chunks.append((a[start:end], b[start:end]))

    with ProcessPoolExecutor(max_workers=workers) as executor:
        partial_results = list(executor.map(_partial_dot, chunks))
    return sum(partial_results)


def dot_product(a, b):
    return parallel_dot_product(a, b)


if __name__ == "__main__":
    x = [1, 2, 3, 4, 5, 6]
    y = [7, 8, 9, 10, 11, 12]
    print("Dot product:", dot_product(x, y))
EOF
```

### Commit parallel implementation
```bash
git add vecadd.py
git commit -m "Add parallel dot-product implementation"
```

### View log on parallel branch
```bash
git log --oneline
```
**Output**: Shows commit history including the parallel commit

## Step 6: Bug Fix on Main Branch

### Switch back to main
```bash
git checkout main
```
**Alternative**: `git switch main`

### Verify we're on main
```bash
git status
git log --oneline
```
**Note**: The parallel commit does NOT appear in main's history

### Modify vecadd.py on main (bug fix)
```bash
cat > vecadd.py << 'EOF'
def dot_product(a, b):
    if len(a) != len(b):
        raise ValueError("Vectors must have the same length")
    return sum(a[i] * b[i] for i in range(len(a)))


if __name__ == "__main__":
    x = [1, 2, 3]
    y = [4, 5, 6]
    print("Dot product:", dot_product(x, y))
EOF
```
**Change**: Added validation and changed implementation style

### Commit bug fix
```bash
git add vecadd.py
git commit -m "Validate vector lengths in dot product"
```

### View divergent history
```bash
git log --oneline --all --graph
```
**Purpose**: Visualize how main and parallel have diverged  
**Output**:
```
* commit-hash-1 (HEAD -> main) Validate vector lengths in dot product
| * commit-hash-2 (parallel) Add parallel dot-product implementation
|/  
* commit-hash-3 Add project description
* commit-hash-4 Initial dot-product implementation
```

## Step 7: Merge Parallel into Main

### Attempt merge
```bash
git merge parallel
```
**Expected**: Merge conflict!  
**Reason**: Both branches modified the same function in `vecadd.py`

**Output**:
```
Auto-merging vecadd.py
CONFLICT (content): Merge conflict in vecadd.py
Automatic merge failed; fix conflicts and then commit the result.
```

### Check status
```bash
git status
```
**Output**: Shows `vecadd.py` as "both modified"

## Step 8: Inspect and Resolve Conflict

### View conflict in file
```bash
cat vecadd.py
```
**Output** (showing conflict markers):
```python
<<<<<<< HEAD
def dot_product(a, b):
    if len(a) != len(b):
        raise ValueError("Vectors must have the same length")
    return sum(a[i] * b[i] for i in range(len(a)))
=======
def dot_product(a, b):
    return parallel_dot_product(a, b)
>>>>>>> parallel
```

### Resolve conflict manually
Edit `vecadd.py` to keep BOTH changes:

```bash
cat > vecadd.py << 'EOF'
from concurrent.futures import ProcessPoolExecutor


def _partial_dot(args):
    a_part, b_part = args
    return sum(x * y for x, y in zip(a_part, b_part))


def parallel_dot_product(a, b, workers=2):
    if len(a) != len(b):
        raise ValueError("Vectors must have the same length")
    if not a:
        return 0

    workers = max(1, min(workers, len(a)))
    chunk_size = (len(a) + workers - 1) // workers
    chunks = []
    for start in range(0, len(a), chunk_size):
        end = start + chunk_size
        chunks.append((a[start:end], b[start:end]))

    with ProcessPoolExecutor(max_workers=workers) as executor:
        partial_results = list(executor.map(_partial_dot, chunks))
    return sum(partial_results)


def dot_product(a, b):
    if len(a) != len(b):
        raise ValueError("Vectors must have the same length")
    return parallel_dot_product(a, b)


if __name__ == "__main__":
    x = [1, 2, 3, 4, 5, 6]
    y = [7, 8, 9, 10, 11, 12]
    print("Dot product:", dot_product(x, y))
EOF
```

**Resolution**: Combined validation check from main with parallel implementation

### Stage resolved file
```bash
git add vecadd.py
```
**Purpose**: Mark conflict as resolved

### Check status
```bash
git status
```
**Output**: Shows "All conflicts fixed but you are still merging"

### Commit merge
```bash
git commit -m "Resolve merge conflict between main and parallel"
```
**Note**: Git automatically creates merge commit message; can use as-is or customize

### Verify merge
```bash
git log --oneline --all --graph
```
**Output**: Shows merge commit connecting both branches

## Step 9: Delete Merged Branch

### Delete parallel branch
```bash
git branch -d parallel
```
**Purpose**: Clean up merged branch  
**Safety**: `-d` refuses to delete if not merged  
**Force**: `-D` deletes regardless (use carefully!)

### Verify deletion
```bash
git branch
```
**Output**:
```
* main
```

## Step 10: Explore Git Stash

### Get help on stash
```bash
git help stash
```
**Purpose**: View comprehensive stash documentation  
**Alternative**: `git stash --help`

### Make temporary change
```bash
echo "# Temporary change for stash demo" >> README.md
```

### Check status
```bash
git status
```
**Output**: Shows README.md as modified

### Stash changes
```bash
git stash
```
**Purpose**: Save uncommitted changes temporarily  
**Output**: "Saved working directory and index state..."

### List stashes
```bash
git stash list
```
**Output**: 
```
stash@{0}: WIP on main: commit-message
```

### Check status after stash
```bash
git status
```
**Output**: Working directory clean (changes saved to stash)

### Restore changes
```bash
git stash pop
```
**Purpose**: Apply stash and remove from stash list  
**Alternative**: `git stash apply` (applies but keeps in list)

### Verify changes restored
```bash
git status
```
**Output**: README.md modified again

### Optional: Clean up test change
```bash
git restore README.md
```
**Purpose**: Discard the temporary change

## Additional Useful Commands

### View detailed log
```bash
git log --graph --decorate --oneline --all
```

### Compare branches
```bash
git diff main..parallel
```

### View file at specific commit
```bash
git show commit-hash:filename
```

### Undo last commit (keep changes)
```bash
git reset --soft HEAD~1
```

### Undo last commit (discard changes) - DANGEROUS!
```bash
git reset --hard HEAD~1
```

### Abort merge in progress
```bash
git merge --abort
```

### Show commit details
```bash
git show commit-hash
```

### Stash with message
```bash
git stash save "Work in progress on feature X"
```

### Apply specific stash
```bash
git stash apply stash@{0}
```

### Drop specific stash
```bash
git stash drop stash@{0}
```

## Command Cheat Sheet

| Command | Purpose |
|---------|---------|
| `git branch name` | Create branch |
| `git branch` | List branches |
| `git branch -m old new` | Rename branch |
| `git checkout name` | Switch branch |
| `git switch name` | Switch branch (modern) |
| `git branch -d name` | Delete merged branch |
| `git branch -D name` | Force delete branch |
| `git merge name` | Merge branch into current |
| `git log --graph --all` | Visualize history |
| `git status` | Show working tree status |
| `git stash` | Save changes temporarily |
| `git stash pop` | Restore stashed changes |
| `git stash list` | List all stashes |

## Notes

- Always check current branch with `git status` before making changes
- Use `git log --graph` to understand branch relationships
- Conflict markers MUST be completely removed before committing
- Test code after resolving conflicts
- Use descriptive commit messages
- Branch early, branch often
- Keep branches short-lived and focused
