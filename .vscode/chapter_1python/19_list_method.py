L1 = [2, 5, 34, 32, 22, 11, 21]
L1.sort()       # it is valid //sort the list
# L1_sorted = L1.sort()          # not valid //output : none  ///because variable L1_sorted has been changed, actual list sorted in L1.sort() function
print(L1)

L1.reverse()          # reverse the list
print(L1)

L1.append(99)              # adds 99 at end of the list
print(L1)

L1.insert(3, 55)                 # insert 55 at index 3
print(L1)

L1.pop(4)                   # remove element atn index 4 i.e.22
print(L1)

L1.remove(32)              #remove 32 from the list 
print(L1)