mydict = {
    "seb":"apple",
    "kela":"banana",
    "santra":"orange",
    "vastu":"item"
}

print("Options are :", mydict.keys())
a = input("Enter the hindi word:")
#print("The english meaning is :", mtydict[a])          # throws an error if you enter the word who is not present 
print("The english meaning is :", mydict.get(a))        # return none if you enter the word who is not present
