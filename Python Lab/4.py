inpt = input()
arr = inpt.split(" ")
integer_array = [int(number) for number in arr]
print("Minimum Element is:", min(integer_array),"\nMaximum Element is: ", max(integer_array))
