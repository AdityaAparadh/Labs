/*
Aditya Aparadh
PRN: 22610082           SYIT                S3
Program implement Complex numbers using Default Constructor
*/


#include <iostream>
using namespace std;

class Complex{
    private:
        int real, imaginary;
    public:
        Complex(){
            real = 0;
            imaginary = 0;
        }
        void getdata(){
            cout << "Enter real part: ";
            cin >> real;
            cout << "Enter imaginary part: ";
            cin >> imaginary;
        }
        void display(){
            cout << "Complex number: " << real << " + " << imaginary << "i" << endl;
        }
};

int main(){
    Complex a = Complex();
    a.getdata();
    a.display();
}