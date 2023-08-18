#Aditya Aparadh     22610082    S3
#Program to create a function to reverse a string


def StringRev(str):
    i=len(str)-1
    revstr=""
    while(i>=0):
        revstr+=str[i]
        i-=1
    return revstr
    
print("Enter a string :")
str=input()
print("The reversed string is :" ,StringRev(str))