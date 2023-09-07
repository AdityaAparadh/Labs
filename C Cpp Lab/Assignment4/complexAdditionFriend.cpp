/*
Aditya Aparadh
PRN: 22610082           SYIT                S3
Program to add two complex numbers using Friend Function
*/

#include <iostream>
using namespace std;


class Complex{
    private:
        float real;
        float imaginary;

    public:
        Complex(float r, float i){
            real = r;
            imaginary = i;
        } 
        void Print(){
            cout << real << " + " << imaginary << "i" << endl;
        }


    friend Complex Add(Complex,Complex);        //Friend Function

};


Complex Add(Complex a, Complex b){
    return Complex(a.real + b.real, a.imaginary + b.imaginary);
}



int main(){
    Complex a(1, 2);
    Complex b(3, 4);
    Complex c = Add(a, b);
    c.Print();
    return 0;
}