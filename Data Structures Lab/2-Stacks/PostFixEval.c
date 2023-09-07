#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 100
int stackPointer = -1;
char characterStack[size];

void push(char x)
{
    if (stackPointer != size-1)
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

int isDigit(char x)
{
    return (x >= '0' && x <= '9');
}

int evaluatePostfixExpression(char *postfixExpression)
{

    int expressionLength = strlen(postfixExpression);

    for (int i = 0; i < expressionLength; i++)
    {
        char symbol = postfixExpression[i];

        if (isDigit(symbol))
        {
            push(symbol - '0');
        }
        else if (isVariable(symbol))
        {
            int value;
            printf("Enter the value of variable %c: ", symbol);
            scanf("%d", &value);
            push(value);
        }
        else
        {
            int operand2 = pop();
            int operand1 = pop();

            switch (symbol)
            {
            case '+':
                push(operand1 + operand2);
                break;
            case '-':
                push(operand1 - operand2);
                break;
            case '*':
                push(operand1 * operand2);
                break;
            case '/':
                if (operand2 != 0)
                {
                    push(operand1 / operand2);
                }
                else
                {
                    printf("Division by zero is not allowed.\n");
                    exit(1);
                }
                break;
            default:
                printf("Invalid operator: %c\n", symbol);
                exit(1);
            }
        }
    }

    if (stackPointer != -1)
    {
        return pop();
    }

    printf("Expression is empty.\n");
    exit(1);
}

int main()
{
    char postFix[100];
    printf("Enter a postfix expression with variables: ");
    scanf("%s", postFix);

    int result = evaluatePostfixExpression(postFix);

    printf("Result: %d\n", result);
}