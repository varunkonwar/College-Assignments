//operator overloading (<<, >>, +, -, *)
#include <iostream>
#include <cmath>
using namespace std;
class Complex{
    private:
    float real, imag;

    public:
    Complex (float r = 0, float i = 0): real(r), imag(i) {}

    Complex operator+ (Complex& other){
        float tempr = (this->real) + (other.real);
        float tempi = (this->imag) + (other.imag);
        return Complex(tempr, tempi);
    }
    Complex operator- (Complex& other){
        float tempr = (this->real)-(other.real);
        float tempi = (this->imag)-(other.imag);
        return Complex(tempr, tempi);
    }
    Complex operator* (Complex& other){
        float tempr = (this->real * other.real) - (this->imag * other.imag);
        float tempi = (this->real * other.imag) + (this->imag * other.real);
        return Complex(tempr, tempi);
    }
    
    friend ostream& operator<< (ostream& out, Complex& );
    friend istream& operator>> (istream& in, Complex& );
};
int main(){
    Complex c1(2,3);
    Complex c2(5,5);

    // overloading functions
    Complex result = c1+c2;
    cout << "\nThe sum will be: " << result;

    result = c1-c2;
    cout << "\nThe diff will be: " << result;

    result = c1*c2;
    cout << "\nThe mult will be: " << result;

    cout << "\nEntering new inputs...";
    cin >> c1;
    cout << "~";
    cin >> c2;
    result = c1+c2;
    cout << "\nThus the new sum: " << result;

    return 0;
}
ostream& operator<< (ostream& out, Complex& result){
    out << result.real << (signbit(result.imag)?"-":"+") << fabs(result.imag) <<"i";
    return out;
}
istream& operator>> (istream& in, Complex& newnum){
    cout << "\nEnter the real part: ";
    in >> newnum.real;
    cout << "\nEnter the imag part: ";
    in >> newnum.imag;
    return in;
}