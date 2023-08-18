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

void pop(){
    if(stackPointer != -1){
        stack[stackPointer--] = 0;
    }else{
        printf("Stack UNDERFLOW");
    }
}

int main(){
    push(69);
    push(420);
    push(88);
    pop();
    pop();
    pop();
    pop();
    printf("%d", stack[stackPointer]);
}
