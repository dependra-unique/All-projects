
# if find the word 'python' in any case /// lower function is use to convert the letter in lower case
with open("81_log_file.py") as f:
    content = f.read()

if 'python' in content.lower():
    print("Yes, Python is present")
else:
    print("No, Python is not present")