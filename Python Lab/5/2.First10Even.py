#Aditya Aparadh     22610082    S3
#Program to print first 10 even numbers

#Without Divisibility Conditions
i=0
count=0
while(count<10):
    print(i)
    count+=1
    i+=2

#With Divisibility Conditions
i=0
while(i<=18):
    if(i%2 == 0):
        print(i)
    i+=1
