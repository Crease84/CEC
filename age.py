print ("Enter age")


choice = int(input("enter your choice:"))
print("you entered: ", choice)

if choice <18:
    print("Your age is under the limit")
elif choice <13:
    print("parent or guardian for you permission")
else:
    print("age confirmed")
    
    