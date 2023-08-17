//Aditya Aparadh    22610082    S3
//Program to copy one array to another with pointers
#include <stdio.h>


int main(){
    int arr1[5] = {5,4,3,2,1};
    int arr2[5];

    for(int i=0;i<5;i++){
        arr2[i] = *(arr1+i);
    } 
    for(int i=0;i<5;i++){
        printf("%d\n", *(arr2+i));
    }

}