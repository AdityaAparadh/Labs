/*
Aditya Aparadh
PRN: 22610082           SYIT                S3
Program implement Complex numbers using Copy Constructor
*/

#include <iostream>
using namespace std;

class Complex{
    private:
        int real, imaginary;
    public:
        Complex(int r, int i){
            real = r;
            imaginary = i;
        }
        Complex(Complex &c){
            real = c.real;
            imaginary = c.imaginary;
        }
        void display(){
            cout << real << " + " << imaginary << "i" << endl;
        }
};

int main(){
    Complex a = Complex(1, 2);
    Complex b = Complex(a);
    cout << "a: ";
    a.display();
    cout << "b: ";
    b.display();
}