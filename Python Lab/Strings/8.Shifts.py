#Aditya Aparadh     22610082    S3
#Program to shift string by one character for length of string

def shift(a):
    x = a[len(a)-1] + a[0:len(a)-1]
    print(x)
    return x

a = input()
i=0
print("All shifts:")
while(i< len(a)):
    a = shift(a)
    i+=1