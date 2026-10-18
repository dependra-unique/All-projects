# True, when enteryour name is same as list

names =["Aadarsh", "Ankit", "Rahul", "Sumit", "Dependra", "Ashwani"]

name = input("Enter your name:\n")
if(name in names):
    print("you name is present in the list.")
else:
    print("you name is not present in the list.")