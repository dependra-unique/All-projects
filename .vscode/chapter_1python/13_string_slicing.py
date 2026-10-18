# greeting = "Good Morning,"
name = "Dependra"
# print(greeting + name)     # <--Concatenating two string,  it means if we want to add two string

## if we want to access the character
# print(name[5])

## if we want to change the character
#name[3] = 'r'      #<-- does not work// not possible
 
## we want to access two or more character

#  print(name[0:8])

# print(name[:4])          # same as name[0:4]

# print(name[0:])           # same as name[0:8]      //total length

print(name[-8:-1])        # output: Dependr   // not include last character


##if we want to access only last character

print(name[-1])

## slicing with skip value

#name = "Dependra"

print(name[0::3])            # Skip:2 character //output : Der   // for skip: in which include two senicolun

print(name[:])         # it use access the character// output: Dependra

print(name[::])         # it use skip character   // output : Dependra