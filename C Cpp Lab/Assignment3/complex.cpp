//Aditya Aparadh     22610082    S3
//Program to add two complex numbers using overloading
#include <iostream>
using namespace std;

class Complex{
    private:
        float real;
        float imag;
    public:
        Complex(float r, float i){
            real = r;
            imag = i;
        }

        void Print(){
            cout << real << " + "<< imag << "i" << endl;
        }

        Complex operator+(Complex b){
            float r = real + b.real;
            float i = imag + b.imag;
            return Complex(r,i);
        }
        void Print(string s){
            cout << s << endl;
        }
        void Print(int num){
            cout << num << endl;
        }
};


int main(){
    cout << "Enter two complex numbers: " << endl;
    float r1,i1,r2,i2;
    cin >> r1 >> i1 >> r2 >> i2;

    Complex c1 = Complex(r1,i1);
    Complex c2 = Complex(r2,i2);
    Complex sum = c1 + c2;
    cout << "SUM IS:";
    sum.Print();
}