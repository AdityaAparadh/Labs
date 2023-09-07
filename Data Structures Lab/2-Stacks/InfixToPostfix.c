#include <stdio.h>
#include <string.h>
#define size 100

int stackPointer = -1;
char characterStack[100];

void push(int x)
{
    if (stackPointer != size - 1)
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

int isVariable(char symbol)
{
    return (symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z');
}
void eval(char *expression)
{
    int len = strlen(expression);

    for(int i=0; i<len;i++){

        if(expression[i] == '(' || isVariable(expression[i]) ){
            push(expression[i]);
        }
        

    }
}

int main()
{
}