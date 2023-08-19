#include <stdio.h>

int stackPointer = -1;
int stack[10];

void push(int x){
    if(stackPointer != 9){
        stack[++stackPointer] = x;
    }else{
        printf("Stack OVERFLOW");
    }
}

int pop(){
    if(stackPointer != -1){
        int temp = stack[stackPointer];
        stack[stackPointer--] = 0;
        return temp;
    }else{
        printf("Stack UNDERFLOW");
    }
    return NULL;
}

int main(){
    push(11);
    push(42);
    push(88);
    pop();
    pop();
    pop();
    printf("%d", stack[stackPointer]);
}
