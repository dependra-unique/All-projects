n1 = int(input("Enter number n1 :"))
n2 = int(input("Enter number n2 :"))
n3 = int(input("Enter number n3 :"))

def greatest(num1, num2, num3):
    if n1>n2:
        if n1>n3:
            return n1
        else:
            return n3
    else:
        if n2>n3:
            return n2
        else:
            return n3

print(greatest(n1, n2, n3))