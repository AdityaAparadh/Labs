//Aditya Aparadh    22610082    S3
//Program to run solve Towers of Hanoi using Recursion


#include <stdio.h>


void Hanoi(int n, char a, char b, char temp){

if(n != 0){
    Hanoi(n-1, a,temp,b);
    printf("Transfer Plate %d to tower %c\n", n, b);
    Hanoi(n-1,temp,b,a);
}
}

int main(){
    Hanoi(3,'A','B','T');
}