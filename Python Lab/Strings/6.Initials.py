#Aditya Aparadh     22610082    S3
#Program to print Initials from Full Name

name = input("Enter your name")
initials = ""
initials += name[0]
i=0
while(i<len(name)):
    if(name[i] == " "):
        initials+=name[i+1]
    i+=1

print("Initials: ", initials)
