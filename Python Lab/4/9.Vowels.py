#Aditya Aparadh     22610082    S3
#Program to count number of vowels in a String

print("Enter the string:")
a = input()
i=0
v=0
vowels = ['a','e','i','o','u','A','E','I','O','U']
while i<len(a):
    if a[i] in vowels:
        v+=1
    i+=1

print("Number of Vowels are:",v)