with open("83_this.txt.py") as f:
    content = f.read()

with open("83_copy.txt", 'w') as f:
    f.write(content)
