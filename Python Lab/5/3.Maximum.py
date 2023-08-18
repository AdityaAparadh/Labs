#Aditya Aparadh     22610082    S3
#Program to find maximum element in a list
nums = [5,6,4,2,88,343,44,38,99,1,55,1]
max = nums[0]

for a in nums:
    if(a>max):
        max = a

print("Maximum element:",max)