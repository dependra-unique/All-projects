marks = int(input("Enter your marks: "))

if(marks>=90 and marks <= 100):
    grade = "A"
elif(marks>=80 and marks <= 100):
    grade  = "B"
elif(marks>=70 and marks <= 100):
    grade = "C"
elif(marks>=60 and marks <= 100):
    grade = "D"
elif(marks>=50 and marks <= 100):
     grade = "E"
else:
    grade = "F"

print("Your grade is " +grade)