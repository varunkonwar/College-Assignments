#include<iostream>
using namespace std;
class student {
    protected:
    int rollno;
    char sname[20]; 
    public:
    void takedata() {
        cout << "Enter Roll No: ";
        cin >> rollno;
        cout << "Enter Student Name: ";
        cin >> sname;
    }
    void showdata() {
        cout << "Roll No : " << rollno << endl;
        cout << "Name    : " << sname << endl;
    } 
};
class artst: public student{
    float ph, hs, en, as, total;
    public: 
    void takedata(){
        student::takedata();
        cout << "Enter Philosophy marks: ";
        cin >> ph;
        cout << "Enter History marks: ";
        cin >> hs;
        cout << "Enter English marks: ";
        cin >> en;
        cout << "Enter Assamese marks: ";
        cin >> as;
    }
    void ctotal(){
        total = ph + hs + en + as;
    }
    void showdata(){
        student::showdata();
        cout << "Philosophy : " << ph << endl;
        cout << "History    : " << hs << endl;
        cout << "English    : " << en << endl;
        cout << "Assamese   : " << as << endl;
        ctotal();
        cout << "Total Marks: " << total << endl;
    }
};
class scst: public student{
    float ph, ch, ma, en, total;
    public: 
    void takedata() {
        student::takedata();
        cout << "Enter Physics marks: ";
        cin >> ph;
        cout << "Enter Chemistry marks: ";
        cin >> ch;
        cout << "Enter Mathematics marks: ";
        cin >> ma;
        cout << "Enter English marks: ";
        cin >> en;
    }
    
    void ctotal() {
        total = ph + ch + ma + en;
    }
    
    void showdata() {
        student::showdata();
        cout << "Physics   : " << ph << endl;
        cout << "Chemistry : " << ch << endl;
        cout << "Maths     : " << ma << endl;
        cout << "English   : " << en << endl;
        ctotal();
        cout << "Total Marks: " << total << endl;
    }
};
int main(){
    int choice;
    cout << "Choose Stream: 1. Arts  2. Science" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        artst a;
        a.takedata();
        cout << "\n--- MARKSHEET ---" << endl;
        a.showdata();
        break;
    case 2:
        scst s;
        s.takedata();
        cout << "\n--- MARKSHEET ---" << endl;
        s.showdata();
        break;
    default:
        cout << "\nInvalid response !";
        break;
    }
    return 0;
}