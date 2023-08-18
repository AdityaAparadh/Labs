#Aditya Aparadh     22610082    S3
#Program to find sum and average of a list

def sumOfList(list):
    sum = 0
    for i in list:
        sum += i
    return sum

def avgOfList(list):
    return sumOfList(list)/len(list)


i=0
list = []
print("Enter 5 numbers")
while i<5:
    list.append(int(input()))
    i+=1

print("Sum of list is: ",sumOfList(list))
print("Average of list is: ",avgOfList(list))