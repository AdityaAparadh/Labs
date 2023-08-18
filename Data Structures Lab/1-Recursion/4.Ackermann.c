//Aditya Aparadh    22610082    S3
//Program to run Ackermann Algorithm using Recursion


#include <stdio.h>

int Ackermann(int m, int n){
    if(m == 0){
        return n+1;
    }else if((m>0) && (n==0)){
        return Ackermann(m-1,1);
    }else if((m>0) && (n>0)){
        return Ackermann(m-1, Ackermann(m,n-1));
    }
}

int main(){

    printf("%d\n", Ackermann(2,2));

}