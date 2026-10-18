with open("79_donkey_replace.py") as f:
    content = f.read()

content = content.replace('donkey', '##$%@^*&##')

with open("79_donkey_replace.py", 'w') as f:
    f.write(content)