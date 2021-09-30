import pygame
pygame.init()
pygame.display.set_caption("For Loops")
screen = pygame.display.set_mode((800, 800))


while True:
    event = pygame.event.wait()
    
    if event.type == pygame.QUIT:
        break
    
    for i in range(10):
        pygame.draw.rect(screen, (100, 0, 100), (i*80, 50, 20, 20))

        pygame.draw.rect(screen, (214, 0, 139), (i*80, 50, 10, 10))
        
        pygame.draw.rect(screen, (100, 0, 100), (i*80, 100, 20, 20))

        pygame.draw.rect(screen, (214, 0, 139), (i*80.5, 105, 10, 10))
        
        pygame.draw.rect(screen, (100, 0, 100), (i*80, 150, 20, 20))
        
        pygame.draw.rect(screen, (214, 0, 139), (i*80.50, 155, 10, 10))
        
        pygame.draw.rect(screen, (100, 0, 100), (i*80, 200, 20, 20))
        
        pygame.draw.rect(screen, (214, 0, 139), (i*80, 205, 10, 10))
        
        pygame.draw.rect(screen, (100, 0, 100), (i*80, 250, 20, 20))
        
        pygame.draw.rect(screen, (214, 0, 139), (i*80, 255, 10, 10))
        
        pygame.draw.rect(screen, (100, 0, 100), (i*80, 300, 20, 20))
        
        pygame.draw.rect(screen, (214, 0, 139), (i*80, 305, 10, 10))
        
        pygame.draw.rect(screen, (100, 0, 100), (i*80, 350, 20, 20))
        
        pygame.draw.rect(screen, (214, 0, 139), (i*80, 355, 10, 10))
        
        pygame.draw.rect(screen, (100, 0, 100), (i*80, 400, 20, 20))
        
        pygame.draw.rect(screen, (214, 0, 139), (i*80, 405, 10, 10))
        
        pygame.draw.rect(screen, (100, 0, 100), (i*80, 450, 20, 20))
        
        pygame.draw.rect(screen, (214, 0, 139), (i*80, 455, 10, 10))
        
        pygame.draw.rect(screen, (100, 0, 100), (i*80, 500, 20, 20))
        
        pygame.draw.rect(screen, (214, 0, 139), (i*80, 505, 10, 10))
        
        pygame.draw.rect(screen, (100, 0, 100), (i*80, 550, 20, 20))
        
        pygame.draw.rect(screen, (214, 0, 139), (i*80, 555, 10, 10))
        
        pygame.draw.rect(screen, (100, 0, 100), (i*80, 600, 20, 20))
        
        pygame.draw.rect(screen, (214, 0, 139), (i*80, 605, 10, 10))
        
        pygame.draw.rect(screen, (100, 0, 100), (i*80, 650, 20, 20))
        
        pygame.draw.rect(screen, (214, 0, 139), (i*80, 655, 10, 10))
        
        pygame.draw.rect(screen, (100, 0, 100), (i*80, 700, 20, 20))
        
        pygame.draw.rect(screen, (214, 0, 139), (i*80, 705, 10, 10))

    pygame.display.flip()
        
pygame.quit()
