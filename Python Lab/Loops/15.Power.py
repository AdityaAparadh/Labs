#Aditya Aparadh     22610082    S3
#Program to calculate power of base to exponent

base = float(input("Enter Base:"))
exp = int(input("Enter Exponent:"))

i=0
prod=1
while(i<abs(exp)):
    prod*=base
    i+=1

if(exp<0):
    prod = 1/prod

print(base,"^",exp,"=", prod)
