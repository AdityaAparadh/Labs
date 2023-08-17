//Aditya Aparadh    22610082    S3
//Program to sort an array with pointers
#include <stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b= temp;
}

int main(){

    int arr[5] ={5,3,7,1,2};

    for(int i=0;i<5;i++){
        for(int j=0; j<(5-i);j++){
            if(*(arr+j) > *(arr+j+1)){
                swap(arr+j, arr+j+1);
            }
        }
    }

    for(int k=0; k<5;k++){
        printf("%d ", arr[k]);
    }
}