#Aditya Aparadh     22610082    S3
#Program to print number of words in a string
s = input()
space = 0
i = 0
while(i<len(s)-1):
    if((s[i] == " ") and (s[i+1] != " ")):
        space += 1
    i+=1


print("Words:", space+1 )