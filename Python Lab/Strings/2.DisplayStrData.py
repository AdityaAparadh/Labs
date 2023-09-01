#Aditya Aparadh     22610082    S3
#Program to count uppercase, lowercase, digits and whitespaces in string

print("Enter the string:")
a = input()
i=0
uppercase=0
lowercase=0
digits=0
whitespaces=0
while i<len(a):
    character = a[i]
    if(ord(character)> 64 and ord(character)<95):
        uppercase+=1
    if(ord(character)> 96 and ord(character)<123):
        lowercase+=1
    if(ord(character)> 47 and ord(character)<58):
        digits+=1
    if(character == " "):
        whitespaces+=1
    i+=1

print("Number of Uppercase characters are:",uppercase)
print("Number of Lowercase characters are:",lowercase)
print("Number of Digits are:",digits)
print("Number of Whitespaces are:",whitespaces)