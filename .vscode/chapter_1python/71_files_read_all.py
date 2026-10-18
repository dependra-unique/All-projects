
# if we read any file then use open function
f = open('71_sample.text.py', 'r')
# f = open('62_recursion_factorial.py')                   # by default module is 'r'
f = open('70_project_game.py', 'r')
data = f.read()                                  # read the file and store in the data
print(data)                                      # print the read content
f.close()                                        # close the file