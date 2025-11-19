#include <iostream>
#include <cmath>
using f = float;
using namespace std;
class circle{
    float x;
public:
    circle (f r){
        x = r;
    }
    f area();
    f perimeter();
};
inline f circle::area(){
    return M_PI*pow(x,2);
}
inline f circle::perimeter(){
    return 2*M_PI*x;
}
int main(){
    f r;
    cout << "\nEnter the radius: ";
    cin >> r;
    circle det(r);
    
    cout << "\nThe area of the circle is: " << det.area();
    cout << "\nThe perrimeter of the circle is: " << det.perimeter();

    return 0;
}