//Aditya Aparadh    22610082    S3
//Program to input and print an array with pointers
#include <stdio.h>


int main(){

    int myarr[5];
    printf("Enter 5 Elements: ");
    for(int i=0;i<5;i++){
        scanf("%d", (myarr+i));
    } 
    for(int i=0;i<5;i++){
        printf("%d\n", *(myarr+i));
    }
}