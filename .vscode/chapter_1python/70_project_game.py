
# Snake, water gun or rock, paper, scissors
import random

def gamewin(comp, you):
    #if computer and you choose same
    if comp == you:
        return False

   # check for all possibilities when computer choose 'w'
    elif comp == 'w':
        if you == 's':
            return True
        elif you == 'g':
            return False


    
    # check for all possibilities when computer choose 's'
    elif comp == 's':
        if you == 'g':
            return True
        elif you == 'w':
            return False




    # check for all possibilities when computer choose 'g'
    elif comp == 'g':
        if you == 'w':
            return True
        elif you == 's':
            return False
            
# computer choose
print("Computer Turn: Snake(s), Water*(w) or Gun(g)?:")
ranno = random.randint(1, 3)

if ranno ==1:
    comp = 's'
elif ranno == 2:
    comp = 'w'
elif ranno ==3:
    comp = 'g'

# you choose
you = input("You Turn: Snake(s), Water(w) or Gun(g)?:")
a = gamewin(comp, you)

# print you and computer choose
print(f"Computer choose {comp}")
print(f"You choose {you}")

# print result
if a == None:
    print("The game is a tie!")

elif a:
    print("You win !")
else:
    print("You lose !")



