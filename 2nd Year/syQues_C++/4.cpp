#include <iostream>
using namespace std;
class Complex{
    private: 
    float real, imag;
    public:
    Complex() : real(0), imag(0) {}
    Complex(float r) : real(r), imag(0) {}
    Complex(float r, float i) : real(r), imag(i) {}

    float rpart(){return real;}
    float ipart(){return imag;}
    Complex add(Complex comp_num){
        return Complex(real + comp_num.real, imag + comp_num.imag);
    }  
    Complex mul(Complex comp_num){
        return Complex((real*comp_num.real) - (imag*comp_num.imag),
        (real*comp_num.imag) + (imag*comp_num.real));
    }
    void display(){
        cout << real << " + " << imag << "i" << endl;
    }
};
int main(){
    Complex c1;
    Complex c2(1);
    Complex c3(2,2);

    cout << "\nC1 = ";
    c1.display();
    cout << "\nC2 = "; 
    c2.display();
    cout << "\nC3 = ";
    c3.display();

    Complex sum = c2.add(c3);
    cout << "\nThe sum of (" << c2.rpart() << ", " << c2.ipart()
    << ") and (" << c3.rpart() << ", " << c3.ipart() << 
    ") will be: " << endl;
    sum.display();
    
    Complex multi = c2.mul(c3);
    cout << "\nThe multiplication of (" << c2.rpart() << ", " << c2.ipart()
    << ") and (" << c3.rpart() << ", " << c3.ipart() << 
    ") will be: " << endl;
    multi.display();

    return 0;
}