#Aditya Aparadh     22610082    S3
#Program to count exchange first and last character in string

a = input()
x = a[len(a)-1] + a[1:len(a)-1] + a[0]
print(x)