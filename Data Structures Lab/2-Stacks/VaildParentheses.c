#include <stdio.h>

int stackPointer = -1;
char bracketStack[10];

char OppositeBracket(char x){
    if(x == '('){
        return ')';
    }else if(x == ')'){
        return '(';
    }else if(x == '{'){
        return '}';
    }else if(x == '}'){
        return '{';
    }else if(x == '['){
        return ']';
    }else if(x == ']'){
        return '[';
    }else{
        return '\0';
    }
}


void push(int x){
    if(stackPointer != 9){
        bracketStack[++stackPointer] = x;
    }else{
        printf("Stack OVERFLOW");
    }
}
char pop(){
    char temp='\0';
    if(stackPointer != -1){
        temp = bracketStack[stackPointer];
        bracketStack[stackPointer--] = 0;

    }else{
        printf("Stack UNDERFLOW");
    }
    return temp;
}

int VaildParenthesis(char b[]){
    for(int i=0; i<10 ; i++){
        if(b[i] == '(' || b[i] == '{' || b[i] == '['){
            push(b[i]);
        }else if(b[i] == ')' || b[i] == '}' || b[i] == ']'){
            if(OppositeBracket(b[i]) == bracketStack[stackPointer]){
                pop();
            }else{
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    char a[10];
    printf("Enter a string of 10 characters: " );
    scanf("%s", a);

    if(VaildParenthesis(a)){
        printf("Vaild Parenthesis");
    }else{
        printf("Invaild Parenthesis");
    }
}