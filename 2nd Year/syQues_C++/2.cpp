#include <iostream>
#include <iomanip>
using namespace std;
struct employee{
    int empno;
    string ename;
    float hra, da, basic;       // HRA=15% & DA=20%
    void getdata();
    double calculate ();
    void dispdata();
}varun;

int main(){
    varun.getdata();
    varun.dispdata();
    return 0;
}
void employee::getdata(){
    cout << "\nEnter your Name: ";
    getline(cin, ename);
    cout << "\nEnter your I'D: ";
    cin >> empno;
    cout << "\nEnter your Base Pay: ";
    cin >> basic;
}
double employee::calculate(){
    return basic+(0.15*basic)+(0.2*basic);
}
void employee::dispdata(){
    cout << "\nYour name is: " << ename;
    cout << "\nYour I'D: " << empno;
    cout << "\nYour totalpay will be: " << fixed << calculate() << endl;
}
