//Aditya Aparadh    22610082    S3
//Program to calculate factorial using Recursion

#include <stdio.h>

int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Factorial of %d is %d",a,factorial(a));
    return 0;
}