from gettext import find


mydict = {"Dependra" : "lord of light",
"key" : "value",
"marks" : "525",
"list" : "[3, 5, 6, 2]"
}

print(mydict["Dependra"])                     # access the value of the word
print(mydict['list'])                         # access the value of the list
mydict['list'] = [4, 5, 6, 7]                 # update/change the list
print(mydict['list'])                         # new list