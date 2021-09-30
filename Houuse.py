#pygame is a library (a bunch of pre-written code) that makes coding games easier
import pygame #handles graphics, sound, game timings, keyboard input, etc
pygame.init()

#game variables
doExit = False #variable to quit out of game loop

#creates game screen and caption
screen = pygame.display.set_mode((500, 500))
pygame.display.set_caption("CasTLE")


#BEGIN GAME LOOP######################################################
while not doExit:
    
    #render (drawing) section-----------------------------------
    screen.fill((250, 250, 250)) #clear screen to black (isn't there a Rolling Stones song about this?)
    
    #draws a square or rectangle. first set of numbers is the color, second is the x/y position, then width/height
    pygame.draw.rect(screen, (0, 120, 255), (150, 220, 200, 150))
    pygame.draw.rect(screen, (102, 175, 255), (100, 170, 55, 200))
    pygame.draw.rect(screen, (102, 175, 255), (350, 170, 55, 200))
    
    
    
    
    
    #draws a circle or oval. first set of numbers is the color, second set is the x/y position, then width/height
    
    
    
    
    pygame.display.flip() #update graphics each game loop

#END GAME LOOP#######################################################
pygame.quit() #shuts down pygame, ends program




