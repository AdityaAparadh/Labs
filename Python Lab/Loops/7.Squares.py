#Aditya Aparadh     22610082    S3
#Program to print squares of first n natural numbers
n = int(input())
i=1
s=""
while(i<=n):
    s += str(pow(i,2))
    s+=(" ")
    i+=1
print(s)