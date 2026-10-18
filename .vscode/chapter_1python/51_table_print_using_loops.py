# # print table using for loop
# num = int(input("Enter number that you want print the table"))

# for i in range(1, 11):
#     print(str(num) + "X" + str(i) +"=" , str(num*i))            # both function produced output same
#     # print(f"{num}*{i}={num*i}")                               # this is f's string


# print table using while loop
num = int(input("Enter number that you want print the table:"))
i = 1
while i<=10:
    print(f"{num}*{i}={num*i}")       # this is used to print the string in any form
    # print(str(num)+" X" +str(i)+ " =", str(num*i))
    i = i+1
