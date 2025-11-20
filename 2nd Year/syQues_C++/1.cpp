// check type of triangle
#include <iostream>
using namespace std;
class triangle{
    float s1, s2, s3;
    public: 
    triangle(float x, float y, float z):s1(x), s2(y), s3(z) {};

    int checktype();
};
inline int triangle::checktype(){
    if (s1 == s2 && s2 == s3 && s1 == s3)
    {
        return 0;
    }else if (s1 != s2 && s2 != s3 && s3 != s1)
    {
        return 2;
    }else
        return 1;
}
int main(){
    float s1, s2, s3;
    cout << "\nEnter the sides of the triangle: ";
    cin >> s1 >> s2 >> s3;
    triangle t1(s1, s2, s3);

    string types[3] = {"equilateral", "isoceles", "scalene"};
    cout << "\nThe above inputs will form " << types[t1.checktype()] << endl;

    return 0;
}
