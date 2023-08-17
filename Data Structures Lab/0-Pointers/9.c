//Aditya Aparadh    22610082    S3
//Program to reverse a string using pointers
#include <stdio.h>


int main(){

    char s[] = "ABCDE";
    int size = 5;
    for(int i=0; i<(size/2) ; i++){
        char temp = *(s+i);
        *(s+i) = *(s+4-i);
        *(s+4-i) = temp;
    }
    printf("%s", s);

}