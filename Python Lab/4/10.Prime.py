#Aditya Aparadh     22610082    S3
#Program to check if given number is Prime

def isPrime(a):
    for i in range(2, a):
        if a % i == 0:
            return False
    return True


print("Enter a Positive integer")
i = input()
num = int(i)

if(num < 1):
    print("Enter Valid Input")
elif(num == 1):
    print("1 is neither Prime nor Composite")
elif(num == 2):
    print("2 is a Prime number")

elif(isPrime(num)):
    print(num,"is a Prime number")
else:
    print(num,"is a Composite number")

