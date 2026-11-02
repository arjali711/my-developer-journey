import random
"""
1 for rock
-1 for scissor
0 for paper
"""

computer = random.choice([1, -1, 0])

youstr = input("ENTER YOUR CHOICE :")
yourdict = {"r" : 1, "s" : -1, "p" : 0}
reversedict = {1 : "Rock", -1 : "Scissor", 0 : "paper"}

you= yourdict[youstr]

print(f"You choose {reversedict[you]} \n AND computer choose {reversedict[computer]}")

if(computer == you):
    print("ITS A DRAW !!")

else:
    if(computer == 1 and you == -1):
        print("YOU LOST !!")
    elif(computer == 1 and you ==0 ):
        print("YOU WON !!")
    elif(computer == -1 and you == 1):
        print("YOU WON !!")
    elif(computer == -1 and you == 0):
        print("YOU LOST !!")
    elif(computer == 0 and you == 1):
        print("YOU LOST !!")
    elif(computer == 0 and you == -1):
        print("YOU WON !!")

