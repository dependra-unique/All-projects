
# use continue statement
for i in range(10):
    print("printing")                         # it print number of 'i' with 'printing' 
    if i==5:
        continue
    print(i)
    # if i==5:                                 # this is not use after print function
    #     continue


# print even number using range function with continue statement
for i in range(10):
    if i%2!=0:
        continue
    print("Even number is in the ranmge of 1 to 10 : " +str(i))
    