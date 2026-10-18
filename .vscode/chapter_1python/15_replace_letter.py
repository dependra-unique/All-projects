letter = '''Dear <|NAME|>,
Greetings from coding house. I am happy to tell you about your selection
You are selected
Have a great day ahead!
Thanks & regards,
Dependra
Date: <|DATE|>
'''

name = input("Enter your name:")
date = input("Enter date:")

letter = letter.replace("<|NAME|>", name)
letter = letter.replace("<|DATE|>", date)

print(letter)