# How to Update Git with Your Progress

## Quick Steps:

1. **Stage all changes:**
   ```powershell
   git add .
   ```

2. **Commit with a message:**
   ```powershell
   git commit -m "Add C project structure with src/ and include/ directories"
   ```

3. **Push to GitHub:**
   ```powershell
   git push origin master
   ```

That's it! Your changes will be on GitHub.

---

## What These Commands Do:

- `git add .` - Stages all new and modified files
- `git commit -m "message"` - Saves your changes with a description
- `git push origin master` - Uploads your commits to GitHub

---

## Better Commit Messages:

Instead of "Update files", use descriptive messages:

```powershell
git commit -m "Add project structure: src/ and include/ directories"
git commit -m "Set up C development environment with MSYS2"
git commit -m "Add main.c with Hello World program"
git commit -m "Configure Cursor with C/C++ extension settings"
```

---

## Future Updates:

Every time you make changes:

```powershell
git add .
git commit -m "Description of what changed"
git push
```

The `push` command will remember `origin master` after the first time.

