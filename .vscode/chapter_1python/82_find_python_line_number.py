# it will execute in file '81_log_file.py       ///use it
from operator import truediv


content = True
i = 1
with open("81_log_file.py") as f:
    while content:
        content = f.readline()
        if 'python' in content.lower():
            print(f"Yes,Python is present on the line no {i}")

        i+=1