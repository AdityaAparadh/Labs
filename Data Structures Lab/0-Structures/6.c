#include <stdio.h>
#include <string.h>

int stringLen(char a[]){
    int i=0;
    while(a[i] != '\0'){
        i++;
    }
    return i;
}


int stringCompare(char a[], char b[]){    // if a<b => 1, a>b = -1, a=b  = 0
    int len;
    int ret = 0;
    if(stringLen(a) > stringLen(b)){
    len = stringLen(a);
    ret = 1;
    }else if(stringLen(a) < stringLen(b)){
    len = stringLen(b);
    ret = -1;    
    }
    for(int i=0; i <len; i++){
        if(a[i] > b[i]){
            ret = -1;
            break;
        }
        else if(a[i] < b[i]){
            ret = 1;
            break;
        }
    }
    return ret;
}

struct Student{
    int prn;
    char name[30];
    float cgpa;
}

int main(){
    
}   