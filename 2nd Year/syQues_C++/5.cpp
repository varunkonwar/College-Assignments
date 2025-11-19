#include <iostream>
#include <cmath>
using namespace std;
class point {
    
    public:
    float xordinate, yordinate;
    point() : xordinate(0), yordinate(0) {}
    point(float xo) : xordinate(xo), yordinate(0) {}
    point(float xo, float yo) : xordinate(xo), yordinate(yo) {}

    float dist();
    float slop(point*);
    friend float dist_points(point* , point*);
    void pointdisplay(){
        cout << " (" << xordinate << ", " << yordinate << ") ";
    }
};
int main(){
    point p1;       //this is origin
    point p2(5);
    point p3(10,10);
    
    cout << "\nDistance between";
    p2.pointdisplay();
    cout << "and";
    p2.pointdisplay();
    cout << "is: " << dist_points(&p2, &p2);
    
    cout << "\nDistance between";
    p2.pointdisplay();
    cout << "and";
    p3.pointdisplay();
    cout << "is: " << dist_points(&p2, &p3)  << endl;
   
    cout << "\nDistance of";
    p2.pointdisplay();
    cout << "from the origin is: " << p2.dist() << endl;
    
    cout << "\nSlope of";
    p3.pointdisplay();
    cout << "from the origin is: " << p1.slop(&p3) << endl;

    return 0;
}
float point::dist(){
    float temp = (pow(xordinate, 2) + pow(yordinate, 2));
    return sqrt(temp);
}
float point::slop(point* loc){
    return (loc->yordinate - yordinate) / (loc->xordinate - xordinate);
}
float dist_points(point* loc1, point* loc2){
    float temp = pow((loc2->xordinate) - (loc1->xordinate), 2)
     + pow((loc2->yordinate) - (loc1->yordinate), 2);
    return sqrt(temp);
}