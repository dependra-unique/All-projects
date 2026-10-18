
# star pattern in the form of triangle
# for i in range(1, 5):
#     for j in range(1, 5):
#         if j<=i:
#             print("*", end='')
#         else:
#             print(" ", end='')
#     print()


# star pattern in the form of triangle different
# for i in range(1, 4):
#     for j in range(1, 6):
#         if j>=4-i and j<=2+i:
#             print("*", end='')
#         else:
#             print(" ", end='')
#     print()



# star pattern in the form of squire with skipped pattern if i = j
for i in range(1, 4):
    for j in range(1, 4):
        if(j==2 and i ==2):
            print(" ", end='')
        else:
            print("*", end='')
    print()