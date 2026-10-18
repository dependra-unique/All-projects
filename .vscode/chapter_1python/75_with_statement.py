with open('71_sample.text.py', 'r') as f:
    file = f.read()
    print(file)


with open('71_sample.text.py', 'w') as f:
    a  = f.write('I am Dependra kumar')
    print(a)                                # output: in this file '71_sample.text.py'