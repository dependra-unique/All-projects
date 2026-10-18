s = set()
s.add(20)
s.add(20.0)
s.add("20")

print(s)               # output : {20, "20"} // because 20 &20.0 is seme in python
print(len(s))          # output : 2   // because 20 &20.0 is seme in python