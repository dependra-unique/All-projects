n = int(input("Enter number that you want to find factorial:"))

def factorial(n):
    if n==0 or n==1:
        return 1
    else:
        return n*factorial(n-1)

print(factorial(n))
