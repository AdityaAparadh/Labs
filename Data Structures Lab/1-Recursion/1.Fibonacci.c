//Aditya Aparadh    22610082    S3
//Program to calculate Fibonacci Series using Recursion
#include <stdio.h>

int fib(int n){
    if(n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main(){
    int n = 20;
    printf("%d", fib(n));
    return 0;
}