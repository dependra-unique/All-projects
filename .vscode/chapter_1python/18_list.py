# in list container, we can store element/value different data type

# create a liat using []

a  = [12, 23, 3, 4, 5, 34]
print(a)    

# access the element of the list using a[0], a[1]-------a[5]

print(a[0])

# change the element of the list using 

a[0] = 99
print(a)

# we can create a list of different datatype

A = ['Aadarsh', 7, 11.5, True]
print(A)

A[0] = 'Dependra'
print(A)

# list slicing

friend = ['Aadarsh', 'Ashwani', 99, 'Jaya']
print(friend[:3])     

# slicing with skip value

name = ['dependra', 'sohan', 'jyoti', 88]
print(name[::2])

print(name[1:])               # output : sohan, jyoti, 88

# negative slicing 

nagetive = ['Rohit', 'Mohit', 'Kanikakapur', 56]
print(nagetive[-4:])

