// calculate the area of a trinagle
#include <stdio.h>
#include <math.h>
float triangleArea (float side1, float side2, float side3);
int main()
{
    float side1, side2, side3;
    float area;
    printf ("Enter side 1: ");
    scanf ("%f", &side1);
    printf ("Enter side 2: ");
    scanf ("%f", &side2);
    printf ("Enter side 3: ");
    scanf ("%f", &side3);

    area = triangleArea (side1, side2, side3);
    printf ("The area of the triangle will be: %.2f", area);

    return 0;
}
float triangleArea (float side1, float side2, float side3)
{
    float s, area;
    
    s = (side1 + side2 + side3)/2.0;
    area = sqrt (s*(s-side1)*(s-side2)*(s-side3));

    return area;
}