f = open('76_poems.text.py')
t = f.read()
if 'Twinkle' in t:
    print("Twinkle is present in poem")
else:
    print("Twinkle is not present in poem")

f.close()