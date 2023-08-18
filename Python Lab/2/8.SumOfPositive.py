#Aditya Aparadh     22610082    S3
#Program to print sum of all positive elements of array
i = 0
arr = []
while(i<5):
    x = input()
    arr.append(x)
    i+=1
sum = 0
for a in arr:
    if(float(a)>=0):
       sum+= float(a) 
    
print("Sum is", sum)