// Write a function which accepts the array and return the positions of the even numbers 
// in the array. 
#include <iostream>
using namespace std;
void getEvenIdx (int arr[], int arrSize);
int main(){
    
    int arr[10] = {1, 2, 5, 4, 6, 3, 7, 8, 8, 10};
    int size = sizeof(arr)/sizeof(arr[0]);

    getEvenIdx(arr, size);
    
    return 0;
}
void getEvenIdx (int arr[], int arrSize){
    cout << "\nEven nos. are present at index: " << endl;
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << i;
            cout << " ";
        }
    }   
}