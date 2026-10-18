
# print greatest number
# a = int(input("Enter the number of a:"))
# b = int(input("Enter the number of b:"))
# c = int(input("Enter the number of c:"))
# d = int(input("Enter the number of d:"))

# if a>b:
#     x1 = a
# else:
#     x1 = b
# if c>d:
#     x2 = c
# else :
#     x2 = d
# if x1>x2:
#     print(str(x1) + "  is greatest")
# else:
#     print(str(x2) + " is greatest")



# print greatest number second method
p = int(input("Enter number of p:"))
q = int(input("Enter number of q:"))
r = int(input("Enter number of q:"))
s = int(input("Enter number of s:"))

if(p>q and p>r and p>s):
    print(str(p) + " is greatest")
elif(q>p and q>r and q>s):
    print(str(q) +  " is greatest")
elif(r>p and r>q and r>s):
    print(str(r) + " is greatest")
else:
    print(str(s) + " is greatest")
