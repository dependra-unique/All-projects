mydict = {"Dependra" : "lord of light",
"key" : "value",
"marks" : "525",
"list" : "[3, 5, 6, 2]",
"anotherdict" : {'Dependra' : 'coder'},
1 : 3
}

# dioctionary method

print(mydict.keys())                         # print keys of mydict

print(type(mydict.keys()))                   # type <dict_keys>

print(type(mydict))                          # type <dict>

print(type(mydict.keys))                     # <builtin_function_or_method>


print(list(mydict.keys()))                   # print list of the mydict.keys

print(mydict.values())                       # print values of the my.dict

print(mydict.items())                        # print the total items of the mydict in the form of tuple

print(mydict)
update = {"adarsh":"friend",
"rahul":"friend",                          # keys cannot same but value can be same first doube quotes have key & second double quotes have value
"ashwani":"friend",
1:9                                        # if you can change any key , you can change the key at update time

}
mydict.update(update)
print(mydict)

print(mydict.get('ashwani'))               # print value assiciated with key 'ashwani'
print(mydict["ashwani"])                   # print value assiciated with key 'ashwani'


# The difference between .get function & syntes of [] dictionaries

print(mydict.get("ashwani2"))              # return none as ashwani is not present in the dictionary  
print(mydict['ashwani2'])                  # throws an error as ashwani is not present in the dictionary  



