To display the full SHA-1 hashes of the last 5 commits:
git log -n 5 --format="%H"

Alternatively, you can use:
git rev-list HEAD -n 5

Both commands will print one commit hash per line, from newest to oldest.
