import os
oldname = "86_rename.txt"
newname = "removed_by_python.txt"

with open(oldname) as f:
    content = f.read()

with open(newname, 'w') as f:
    f.write(content)

os.remove(oldname)
