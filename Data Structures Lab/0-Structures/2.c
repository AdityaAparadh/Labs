#include <stdio.h>

struct complex{
    float realPart;
    float imaginaryPart;
}s1,s2,s3;

struct complex add(struct complex z1, struct complex z2)
{
    struct complex z3;
    z3.realPart = z1.realPart + z2.realPart;
    z3.imaginaryPart = z1.imaginaryPart + z1.imaginaryPart;
    return z3;
}


int main(){

    printf("Enter z1\n");
    scanf("%f %f", &s1.imaginaryPart, &s1.realPart);
    printf("Enter z2\n");
    scanf("%f %f", &s2.imaginaryPart, &s2.realPart);
    struct complex z3  = add(s1,s2);
    printf("z1 + z2 = %f + %fi \n", z3.realPart, z3.imaginaryPart);
}