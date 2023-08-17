//Aditya Aparadh    22610082    S3
//Program to add two numbers with pointers

#include <stdio.h>

int main(){
    int a=5,b=2, *p1, *p2;  
    p1 = &a;                
    p2 = &b;
    printf("a+b = %d", *p1+*p2);
}