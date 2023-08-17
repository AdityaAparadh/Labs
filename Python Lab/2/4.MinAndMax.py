#Aditya Aparadh     22610082    S3
#Program to find minimum and maximum elemnt of an array
inpt = input()
arr = inpt.split(" ")
integer_array = [int(number) for number in arr]
print("Minimum Element is:", min(integer_array),"\nMaximum Element is: ", max(integer_array))
