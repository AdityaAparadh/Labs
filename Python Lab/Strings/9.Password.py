#Aditya Aparadh     22610082    S3
#Program to check Strength of password
def uppercase(s):
    for x in s:
        if(ord(x)> 64 and ord(x)<95):
            return True
    return False

def lowercase(s):
    for x in s:
        if(ord(x)> 96 and ord(x)<123):
            return True
    return False

def nums(s):
    for x in s:
        if(ord(x)> 47 and ord(x)<58):
            return True
    return False

def Length(s):
    if len(s)>7:
        return True
    return False


a = input("Enter a password:")
if(uppercase(a) and lowercase(a) and nums(a) and Length(a)):
    print("Valid Password")
else:
    print("Invalid Password")