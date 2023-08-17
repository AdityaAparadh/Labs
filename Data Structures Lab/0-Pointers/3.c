//Aditya Aparadh    22610082    S3
//Program to swap two numbers with pointers

#include <stdio.h>


void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b= temp;
}

int main(){
    int a=5,b=2; 
    printf("Before Swapping: a=%d  b=%d",a,b);

    //The Swap
    swap(&a,&b);

    printf("\nAfter Swapping: a=%d  b=%d\n",a,b);
}