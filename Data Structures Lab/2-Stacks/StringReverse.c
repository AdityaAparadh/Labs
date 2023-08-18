#include <stdio.h>

int stackPointer = -1;
char characterStack[10];

void push(int x){
    if(stackPointer != 9){
        characterStack[++stackPointer] = x;
    }else{
        printf("Stack OVERFLOW");
    }
}
char pop(){
    char temp='\0';
    if(stackPointer != -1){
        temp = characterStack[stackPointer];
        characterStack[stackPointer--] = 0;

    }else{
        printf("Stack UNDERFLOW");
    }
    return temp;
}

int main(){
    char a[10];
    printf("Enter a string of 10 characters: " );
    scanf("%s", a);

    for(int i=0; i<10 ; i++){
        push(a[i]);
    }
    for(int j=0; j<10 ; j++){
        a[j] = pop();
    }
    printf("%s", a);

}