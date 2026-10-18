
def faharenhiet(cel_value):
    return (cel_value*(9/5))+32

cel_value = float(input("Enter your temperature in celcious :"))
far = faharenhiet(cel_value)
print(far)

# def farh(cel):
#     return (cel*(9/5))+32
# c = 37
# far = farh(c)
# print("The faheranhiet temperature is "+ str(far))