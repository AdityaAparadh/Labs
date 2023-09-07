// Clockwise rotaton

#include<iostream>
using namespace std;

int* rotate(int arr[], int n){
    int temp;
    for(int i=n-1;i>=0;i--){
        arr[(i+1)%n] = arr[i];        
    }
    return arr;
}

int main(){
    int arr[5];
    for(int i=1;i<=5;i++){
        arr[i-1] = i;
    }
    rotate(arr, 5);

    return 0;
}