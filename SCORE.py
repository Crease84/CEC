
a = int(input("Whats the score?"))
print ("SICK")

b = int(input("Enter score #2"))
print ("NICE ON")

c = int(input("whats the LAST score?"))
print ("STRIKE!!!!")

if a<b and b<c:
    print("in order: ", a, b, c)
    
if a<c and c<b:
    print("in order: ", a, c, b)
    
if b<a and b<c:
    print("in order: ", b, a, c)
    
if b<c and c<a:
    print("in order: ", b, c, a)
    
if c<a and a<b:
    print("in order: ", c, a, b)

if c<b and b<a:
    print("in order: ", c, b, a)





      