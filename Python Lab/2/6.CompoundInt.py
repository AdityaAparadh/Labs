#Aditya Aparadh     22610082    S3
#Program to calculate Compound Interest
print("Enter Principal Amount: ")
p = input()
print("Enter Rate of Interest: ")
r = input()
print("Enter Time Period: ")
t = input()
amount = (float(p)*pow(( 1+(float(r)/100) ),float(t)))
interest = amount - float(p)
print("Interest", interest,"\nAmount", amount )