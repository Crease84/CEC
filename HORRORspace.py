import random


room = 1
choice = 1


print("You looking like an astronust that like goes to space or whatever ON A MISSION but, The space ship you are on EXPLODEDSSSSSSS")
print("You floating there in space when a HUGE space HOUSE hits you and you find away inside")
print("Youre gonna be straned there for a while, Better go explore or DIE of loneliness")
print("-Enter 'q' to exit and any point")
print("GAME START")
print()
x = 1

while choice != 'q':
    if room == 1:
        print("Its pretty DORK but looks like a kitchen")
        print("There's a stove, dishwasher, fridge, and complementing blue countertops")
        print("but Spilling out of the darkness, the room is full of DOLLS! DOLLS EVERYWHERE!!!")
        print("falling out of the fridge, Hanging from the ceiling, Pinned to the walls")
        print("Theres a door that leads North and another that goes to the East")
        choice = input()
        
        if choice == 'E':
            room = 2
        elif choice == 'N':
            room = 4
        else:
            print("WOWWW CANT YOU READ!?!?!?!?")  
        
    elif room == 2:
        print("This is probably the living room")
        print("A coutch and coffe table accent the broken futureistic tv that lights up the room")
        print("Gross Sticky and smelly blood stains the walls and tv screen")
        print("spiders are occupying the coutch, looks like thier favorte show is on...IDK")
        print("you can see a door to the West and a hole in the wall to the North")
        
        numb = random.randrange(1, 101)
        if numb <= 30:
            print ("CHILL, Hemoglobin goblin appears")
        elif numb <= 50:
            print("OH NO, Its rags...WRAPPED...AROUND A BODY")
        else:
            print("I thought something would show up")
         
        print("Soooo, Where do you go next?")
         
        choice = input()
        
        if choice == 'N':
            room = 3
        elif choice == 'W':
            room = 1
        else:
            print("Bruh, thats not a DIRECTION")
            
    elif room == 3:
        print("OOO theres toilet! AND ITS USED")
        print("My favorite part is the snakes comming out of the sink")
        print("Other than that I cann't see anything else, I could use a flashlight...")
        print("Theres a door theres a door just ajar to the West and the big hole to the South")
        choice = input()
        
        
        if choice == 'W':
            room = 4
        elif choice == 'S':
            room = 2
        else:
            print("Error - 404")
            
            
    elif room == 4:
        print("A big bed takes up most of the room")
        print("would be comfy if it wasnt covered in maggots and cockroches")
        print("Watch your step, theres some glass on the foor")
        print("Your exits are to the West, South, and East")
        choice = input()
        
        
        if choice == 'W':
            room = 5
        elif choice == 'S':
            room = 1
        elif choice == 'E':
            room = 3
        else:
            print("WHERE??")
        
    elif room == 5:
         print("Room has boxes stacked to the ceiling")
         print("OMG THERES A DEAD BODY!!! No Im kidding")
         print("No Im kidding KIDDING, A clown lays motionless with a chainsaw in his chest")
         print("and a random guy whos missing a head")
         print("The exit is East of here")
         
         numb = random.randrange(1, 101)
         if numb <= 30:
             print ("Oh geez rick, there a blood sucking deamon in the room")
         elif numb <= 50:
             print("My manz is wrapped in some toilet paper")
         else:
             print("I thought something would show up")
         
         print("where to now?")
         choice = input()
         
         
         
         if choice == 'E':
             room = 4
         else:
             print("DOES IT LOOK LIKE YOU CAN GO THAT WAY?????")
            
