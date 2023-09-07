#include <stdio.h>

int stackPointer = -1;
char characterStack[10];

void push(int x)
{
    if (stackPointer != 9)
    {
        characterStack[++stackPointer] = x;
    }
    else
    {
        printf("Stack OVERFLOW");
    }
}
char pop()
{
    char temp = '\0';
    if (stackPointer != -1)
    {
        temp = characterStack[stackPointer];
        characterStack[stackPointer--] = 0;
    }
    else
    {
        printf("Stack UNDERFLOW");
    }
    return temp;
}

void DecToBin(int n)
{
    int r;
    while (n != 0)
    {
        r = n % 2;
        push(r);
        n /= 2;
    }
    printf("Binary: ");
    while (stackPointer != -1)
    {
        printf("%d", pop());
    }
}

int main()
{
    int a;
    printf("Enter a decimal number:");
    scanf("%d", &a);
    DecToBin(a);
    printf("\n");
}