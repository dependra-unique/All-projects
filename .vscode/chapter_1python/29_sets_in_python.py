
# it provides output in the sorted order

a = {2, 1, 4, 3}               # this is sets 
print(a)
print(type(a))                 # <class 'set'>

b = {2, 1, 2, 3, 2, 1}         # this is sets but it provides not repetative element
print(b)
print(type(b))

c = {'ashwani', 'rahul', 'adarsh', 'pankaj'}              # it is also set
print(c)                                                  # provides the output of c set at every time different if we enter the string
print(type(c))                                            # <class 'set'>

d = {'d', 'e', 'a', 'c', 'b'}                             # output different at every time running the eprogram if we enter the character
print(d)



## Important: this syntex create an empty dictionary and not a empty set

x = {}
print(x)                                  # it print this '{}'
print(type(x))                            # <class 'dict'


## Important: empty set create as the following syntex

y = set()                                    # this is empty set
print(y)                                  # print this '()'
print(type(y))                            # <class 'tuple'>  //// empty set create from the tuple


