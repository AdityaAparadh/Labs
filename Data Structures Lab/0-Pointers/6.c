//Aditya Aparadh    22610082    S3
//Program to swap two arrays with pointers
#include <stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b= temp;
}

int main(){
    int arr1[5] = {5,4,3,2,1};
    int arr2[5] = {10,9,8,7,6};

    for(int i=0;i<5;i++){
        swap(arr1+i, arr2+i);
    } 
    printf("AFTER SWAP:\nArray 1:\n");
    for(int i=0;i<5;i++){
        printf("%d  ", *(arr1+i));
    }
        printf("\n\nArray 2:\n");
    for(int i=0;i<5;i++){
        printf("%d  ", *(arr2+i));
    }

}