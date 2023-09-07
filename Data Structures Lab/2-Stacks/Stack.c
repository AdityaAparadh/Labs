#include <stdio.h>

int stackPointer = -1;
int stack[10];

void push(int x)
{
    if (stackPointer != 9)
    {
        stack[++stackPointer] = x;
    }
    else
    {
        printf("Stack OVERFLOW");
    }
}

int pop()
{
    if (stackPointer != -1)
    {
        int temp = stack[stackPointer];
        stack[stackPointer--] = 0;
        return temp;
    }
    else
    {
        printf("Stack UNDERFLOW");
    }
    return NULL;
}

void Print()
{
    for (int i = stackPointer; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

void menu()
{
    system("clear");
    printf("\n\n1.Push a value to stack\n2.Pop a value off stack\n3.Print Stack\n\n0.Exit Program\n\n\n");
    printf("Enter your option:");
    int choice;
    scanf("%d", &choice);
    system("clear");
    switch (choice)
    {
    case 1: // PUSH
        printf("\nEnter value to push: ");
        int val;
        scanf("%d", &val);
        push(val);
        menu();
        break;

    case 2: // POP
        printf("\nPopped Value: %d", pop());
        menu();
        break;

    case 3: // PRINT
        Print();
        menu();
        break;
    case 0:
        break;
    default:
        printf("\nEnter a valid option!");
        menu();
        break;
    }
}

int main()
{
    menu();
}
