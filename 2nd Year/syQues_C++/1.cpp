#include <iostream>
using namespace std;
class triangle{
    float x, y, z;
public:
    triangle(float s1, float s2, float s3){
        x=s1, y=s2, z=s3;  
    }
    int checktype(){
        if (x == y && x != z)
        {
            return 1;
        }
        return 0;  
    }
};
int main(){
    float s1, s2, s3;
    cout << "\nEnter the sides: ";
    cin >> s1 >> s2 >> s3;
    triangle checkme(s1, s2, s3);

    if (checkme.checktype())
    {
        cout << "\nThe above inputs will form a isoceles triangle";
    }else
        cout << "\nTherefore the above inputs will form a equilateral triangle.";
    return 0;
}
