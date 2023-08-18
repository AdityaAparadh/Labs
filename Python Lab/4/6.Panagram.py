#Aditya Aparadh     22610082    S3
#Program to check if given string is a panagram

s = input()
char = 'a' 
isPanagram = True
while(char <= 'z'):
    if char in s:
        char = chr(ord(char) + 1)
    else:
        isPanagram = False
        break

if(isPanagram):
    print(s," is a panagram")
else:
    print(s," is not a panagram")
    