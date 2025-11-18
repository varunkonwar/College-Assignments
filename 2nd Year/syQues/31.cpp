//  Writing a program to declare an array and initialize the values according to the user. Now 
//  ask the user for a number n and return the nth element from the array. 
#include <iostream>
using namespace std;
int main(){
    int size, num; 
    cout << "\nEnter the size of the array: ";
    cin >> size;
    cout << endl;

    int* userArr = new int[size];       // dynamic array created

    for (int i = 0; i < size; i++)      // taking inputs from the user
    {
        cout << "Element [ " << i << " ]: "; 
        cin >> userArr[i];
    }
    cout << "\nEnter the nth element to peek: ";
    cin >> num;
    cout << "\nThe " << num << "th element is: " << userArr[num] << endl;
    
    delete[] userArr;
    userArr = nullptr;
    
    return 0;
}
