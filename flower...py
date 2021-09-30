#pygame is a library (a bunch of pre-written code) that makes coding games easier
import pygame #handles graphics, sound, game timings, keyboard input, etc
pygame.init()

#game variables
doExit = False #variable to quit out of game loop

#creates game screen and caption
screen = pygame.display.set_mode((500, 500))
pygame.display.set_caption("flower")


#BEGIN GAME LOOP######################################################
while not doExit:
    
    #render (drawing) section-----------------------------------
    screen.fill((0, 0, 0)) #clear screen to black (isn't there a Rolling Stones song about this?)
    
    #draws a square or rectangle. first set of numbers is the color, second is the x/y position, then width/height
    pygame.draw.rect(screen, (0, 150, 0), (160, 220, 20, 100))
    
    #draws a circle or oval. first set of numbers is the color, second set is the x/y position, then width/height
    pygame.draw.ellipse(screen, (255,0,0), (150, 200, 40, 40))
    pygame.draw.ellipse(screen, (255,0,0), (130, 200, 40, 40))
    pygame.draw.ellipse(screen, (255,0,0), (170, 200, 40, 40))
    pygame.draw.ellipse(screen, (255,0,0), (150, 190, 40, 40))
    

    pygame.draw.rect(screen, (0, 150, 0), (260, 220, 20, 100))
    pygame.draw.ellipse(screen, (255,0,0), (250, 200, 40, 40))
    pygame.draw.ellipse(screen, (255,0,0), (230, 200, 40, 40))
    pygame.draw.ellipse(screen, (255,0,0), (270, 200, 40, 40))
    pygame.draw.ellipse(screen, (255,0,0), (250, 190, 40, 40))    
    

    pygame.display.flip() #update graphics each game loop

#END GAME LOOP#######################################################
pygame.quit() #shuts down pygame, ends program



