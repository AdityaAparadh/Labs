//Aditya Aparadh    22610082    S3
//Program to swap concatenate two strings with pointers
#include <stdio.h>


int main(){

    char s1[] = "Aditya";
    char s2[] = "Aparadh";

    int i=0,j=0;
    while(s1[i] != '\0'){
        i++;
    }
    while(s2[j] != '\0'){
        *(s1+i+j) = *(s2+j);
        j++;
    }
    *(s1+i+j) = '\0';

    printf("%s", s1);
}