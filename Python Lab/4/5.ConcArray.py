#Aditya Aparadh     22610082    S3
#Program to create a string from array

arr = []
n = int(input("Enter number of elements : "))
for i in range(0, n):
    str = input()
    arr.append(str)

s = ""
for a in arr:
    s += a
    s+=" "


print("Concatenated String: ",s)