#Aditya Aparadh     22610082    S3
#Program to calculate factorial of a number

n = int(input("Enter a number for Factorial:"))

if(n<0):
    print("Factorial Doesn't exist for Negative numbers")
elif(n==0):
    print("0! = 1")
else:
    i=1
    fact=1
    while(i<=n):
        fact*=i
        i+=1
    
    print(str(n)+"! = ",fact)