num = int(input("Enter number that you want to check: "))
prime = True
for i in range(2, num):
    if (num%i==0):
       prime = False
       break
if prime:
    print(str(num)+ " is prime number")       
else:
        print(str(num)+ " is not prime number")
    
