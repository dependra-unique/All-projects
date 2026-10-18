from operator import truediv


text = input("Enter your text: ")

if("make a lot of money" in text):
    spam = True
elif("buy now" in text):
    spam = True
elif("subscribe now" in text):
    spam = True
elif("click this" in text):
    spam = True
else:
    spam = False

if(spam):
    print("TRhe text is spam ")
else:
    print("The text is not spam")