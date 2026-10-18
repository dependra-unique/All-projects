def sumnatural(n):
    if n == 1:
        return 1
    else:
        return n+sumnatural(n-1)

n = int(input("Enter number that you want the sum of first natural number :"))

print("The sum is : " +str(sumnatural(n)))