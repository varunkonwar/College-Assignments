// Implement following sorting algorithms:  
// Bubble sort, Insertion sort ,Selection sort, Counting sort
#include <iostream>
#include <vector>
using namespace std;

// Bubble Sort
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }
}

// Selection Sort
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for(int i = 0; i < n-1; i++) {
        int minIndex = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}

// Insertion Sort
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for(int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

// Counting Sort (assumes non-negative values)
void countingSort(vector<int>& arr) {
    if(arr.empty()) return;

    int maxVal = arr[0];
    for(int n : arr)
        maxVal = max(maxVal, n);

    vector<int> count(maxVal + 1, 0);

    // Count frequency
    for(int n : arr)
        count[n]++;

    // Rebuild sorted array
    int index = 0;
    for(int i = 0; i <= maxVal; i++) {
        while(count[i]--) {
            arr[index++] = i;
        }
    }
}

void printArray(const vector<int>& arr) {
    for(int n : arr)
        cout << n << " ";
    cout << endl;
}

int main() {
    vector<int> arr;
    int n, choice;

    cout << "Enter number of elements: ";
    cin >> n;

    arr.resize(n);
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << "\nChoose Sorting Algorithm:\n";
    cout << "1. Bubble Sort\n";
    cout << "2. Selection Sort\n";
    cout << "3. Insertion Sort\n";
    cout << "4. Counting Sort\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1: bubbleSort(arr); break;
        case 2: selectionSort(arr); break;
        case 3: insertionSort(arr); break;
        case 4: countingSort(arr); break;
        default:
            cout << "Invalid choice." << endl;
            return 0;
    }

    cout << "\nSorted Array: ";
    printArray(arr);

    return 0;
}
