#include <iostream>
using namespace std;

class String {
    char* p;
    int size;

public:
    // Default constructor
    String() {
        p = nullptr;
        size = 0;
    }

    // Parameterized constructor
    String(char* s) {
        // calculate length manually (without strlen)
        int len = 0;
        while (s[len] != '\0') {
            len++;
        }
        size = len;
        p = new char[size + 1];  // allocate memory
        for (int i = 0; i < size; i++) {
            p[i] = s[i];
        }
        p[size] = '\0';
    }

    // Copy constructor
    String(String& other) {
        size = other.size;
        p = new char[size + 1];
        for (int i = 0; i < size; i++) {
            p[i] = other.p[i];
        }
        p[size] = '\0';
    }

    // Destructor
    ~String() {
        delete[] p;
    }

    // Function: Length of string
    int length() {
        return size;
    }
    // Display function
    void display(){
    cout << p << endl;
    }
    
    void compare(String& );
    void copy(String& );
    void reverse();
};

int main() {
    String s1("Hello");
    String s2("World");
    
    cout << "s1: ";
    s1.display();
    cout << "s2: ";
    s2.display();
    
    cout << "Length of s1: " << s1.length() << endl;
    
    cout << "Comparison (s1 vs s2): ";
    s1.compare(s2);
    
    String s3;
    s3.copy(s1);
    cout << "After copying s1 to s3: ";
    s3.display();
    
    s1.reverse();
    cout << "Reversed s1: ";
    s1.display();
    
    return 0;
}
// Function: Compare two strings (Yes/No)
void String::compare(String& other) {
    if (size != other.size) {
        cout << "No" << endl;
        return;
    }
    for (int i = 0; i < size; i++) {
        if (p[i] != other.p[i]) {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}
// Function: Copy one string to another
void String::copy(String& other) {
    delete[] p;  // free old memory
    size = other.size;
    p = new char[size + 1];
    for (int i = 0; i < size; i++) {
        p[i] = other.p[i];
    }
    p[size] = '\0';
}

// Function: Reverse the string
void String::reverse() {
    for (int i = 0; i < size / 2; i++) {
        char temp = p[i];
        p[i] = p[size - 1 - i];
        p[size - 1 - i] = temp;
    }
}