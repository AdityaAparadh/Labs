inpt = input()
i=0
isPalindrome = True
while(i <= int(len(inpt))/2):
    if(inpt[i] != inpt[(int(len(inpt)) - i-1)]):
        isPalindrome = False
        break
    i+=1

if(isPalindrome):
    print("Is a Palindrome")
else:
    print("Is Not a Palindrome")