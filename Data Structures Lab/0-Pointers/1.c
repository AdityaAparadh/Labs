//Aditya Aparadh    22610082    S3
//Program to create, initialise and use pointers

#include <stdio.h>

int main(){


    int a=5,b=2, *p1, *p2;  //Creating Pointers

    p1 = &a;                //Initialising Pointers
    p2 = &b;

    printf("a= %d\nb=%d\n",*p1,*p2);
}