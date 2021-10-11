#paste the first 5 lines from your last pygame program here
import pygame
import random
pygame.init()#initializes Pygame
pygame.display.set_caption("IT DO BE CIRCLE")#sets the window title
screen = pygame.display.set_mode((800, 800))#creates game screen


def MathTHING (a1334, a35574, b119, b34474):
    return (b34474 - a35574)/(b119-a1334)

num = MathTHING(10, 5, -12, 20)
print(num)

def MathSTUFF (a, b, c):
    return (a + b + c)/3

OOF = MathSTUFF(12, 23, 34)
print(OOF)

#write function circle
def CRKO():
    rnd = random.randrange(1, 799)
    RAND = random.randrange(1, 799)
    pygame.draw.circle(screen, (250, 0, 0), (rnd,RAND), 60)
    pygame.draw.circle(screen, (250, 234, 0), (rnd,RAND), 45)
    pygame.draw.circle(screen, (250, 0, 106), (rnd,RAND), 20)
#call the function
CRKO()
CRKO()
CRKO()
CRKO()
CRKO()
CRKO()
CRKO()
CRKO()
CRKO()
CRKO()
CRKO()
#copy paste flip display from the other program1
pygame.display.flip()