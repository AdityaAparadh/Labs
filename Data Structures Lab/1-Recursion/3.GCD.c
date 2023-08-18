//Aditya Aparadh    22610082    S3
//Program to calculate GCD of two numbers using Recursion


#include <stdio.h>

int Greatest(int a,int b){
    if(a<b){
        return b;
    }
    else{
        return a;
    }
}

int Smallest(int a, int b){
    if(a>b){
        return b;
    }else{
        return a;
    }
}

int GCD(int a, int b){
    
    if(Greatest(a,b)%Smallest(a,b) != 0){
        return GCD(a, a%b);
    }else{
    return Smallest(a,b);
    }
}


int main(){
    printf("%d\n", GCD(35,14));
}