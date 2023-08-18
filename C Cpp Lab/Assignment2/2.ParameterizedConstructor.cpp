/*
Aditya Aparadh
PRN: 22610082           SYIT                S3
Program implement Complex numbers using Parameterized Constructor
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
        void display(){
            cout << "Complex number: " << real << " + " << imaginary << "i" << endl;
        }
};

int main(){
    Complex a = Complex(1, 2);
    a.display();
}