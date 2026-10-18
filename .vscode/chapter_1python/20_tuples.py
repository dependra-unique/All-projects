# creating a tuples using ()

t = (2, 5, 7, 4, 8)
print(t)                  # access the tuple

t1 = ()                   # Empty tuple
print(t1)

t2 = (1)                  # wrong way to declare a tuple with single element
print(t2)

t3 = (1, )                # right way to declare a tuple with single element
print(t3)


t4 = (3, 5, 7, 89, 99)
print(t4[1])              # access the element of a tuple using index


# cannot update the value of a tuple
t5 = (2, 5, 3, 12, 11)
t5[0] = 22                # throws an error
print(t5)

