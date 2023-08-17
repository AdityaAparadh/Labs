#include <stdio.h>

struct{
    int inches;
    int feet;
}s1,s2,s3;


int main(){

    printf("Enter s1\n");
    scanf("%d %d", &s1.feet, &s1.inches);
    printf("Enter s2\n");
    scanf("%d %d", &s2.feet, &s2.inches);

    s3.inches = s1.inches + s2.inches;
    int carry=0;
    if(s3.inches > 11){
        carry = s3.inches /12;
        s3.inches = s3.inches%12;
    }
    s3.feet = s1.feet + s2.feet + carry;
    printf("s1 + s2 = %d feet %d inches\n", s3.feet, s3.inches);
}