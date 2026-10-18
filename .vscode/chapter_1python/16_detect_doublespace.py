string = '''Hello everyone, I am Dependra  kumar  .Thanks  for given me   this opportunity'''
print(string.find("  "))           # output : 29 // it will detect only one doublespace
print(string.count("  "))        # output : 4  // space = 4
print(string.replace("  ","h"))          # replace double space by h
