#  creating a empty set

## use sets method
x = set()
print(type(x))                  # <class 'set'>

x.add(3)
x.add(4)
x.add(3)
x.add(5)
x.add(4)
# x.add([1, 2, 3, 4])           # '[]' it shows list, list cannot add in the set because list is unhashable/immutable i.e.we can change the element of the list
x.add((2, 4, 3, 1))           # '()' it shows tuple ,it can not change, so we can add the tuple
# x.add({2, 4, 5, 1})           # '{}' it shows dictionary, dictionary cannot add in the set becaue it is unhashanle 

print(x)                      # print only unique number

#print(len(x))

# use lenth function
a = {1, 2, 3, 5}
print(a)
#print(len(a))                 # output : 4
#a.add(2)                      # cannot add because this is set i.e.add only unique number
#a.add(3)                      # cannot add because this is set i.e.add only unique number
a.add(4)
print(a)

# use remove function 
s = {2, 3, 4, 5, 6}
print(s)                       # print : set s
print(len(s))                  # print : 5
s.remove(3)                    
print(s)                       # print : {2, 4, 5, 6}


## use pop function 

c = {1, 2, 3, 4, 5}
print(c.pop())                   # pop : take no argument  /// remove an arbitary element


