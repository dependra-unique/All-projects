words = ['monu', 'susmita', 'jyoti', 'swati', 'aadarsh', 'dependra']

with open("80_replace_list.py") as f:
    content = f.read()

for word in words:
    content = content.replace(word, '##@%$&^*@##')
    with open("80_replace_list.py", 'w') as f:
        f.write(content)