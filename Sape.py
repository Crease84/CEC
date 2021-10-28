import pygame
import random
import math
pygame.init()
pygame.display.set_caption("IDK ITS JUST MORE MATH BUT WHATEVES")
screen = pygame.display.set_mode((800, 800))
clock = pygame.time.Clock()


def TRIANGles(a, b):
    return math.sqrt((a*a) + (b*b))

num = TRIANGles(3, 4)
print(num)



def circ(A):
    for i in range(A):
        rnd = random.randrange(1, 799)
        RAND = random.randrange(1, 799)
        c1 = random.randrange(0, 255)
        c2 = random.randrange(0, 255)
        c3 = random.randrange(0, 255)
        pygame.draw.circle(screen, (c1, c2, c3), (rnd,RAND), 60)
        pygame.display.flip()

circ(3)
   
   
def shapes(stuff):
   
        c1 = random.randrange(0, 255)
        c2 = random.randrange(0, 255)
        c3 = random.randrange(0, 255)
        if stuff=='c':
            #draw pygame circle here
            pygame.draw.circle(screen,(c1,c2,c3),(random.randrange(0,800),random.randrange(0,800)),20)
            print("CRKO")
        elif stuff=='t':
            #draw pygame triangle(polygon)
            pygame.draw.polygon(screen, (c1, c2, c3), ((452,214),(155,545),(156,163)))
            print("TRNGEL")
        elif stuff =='r':
            #draw pygame rectangle
            pygame.draw.rect(screen,(c1,c2,c3),(random.randrange(0,800),random.randrange(0,800),20,20))
            print("RCTNGEL")
           
        else:
            print("invalid input")


#print options for user
print("SHAPES, Enter 'c' for CRKO, 'T' TRNGL, or 'r' for RCNGLE" )
#get user input
stuff=input()
#call function
shapes(stuff)
pygame.display.flip()
clock.tick(600)
