// calculate the area and circumference of a circle
#include <stdio.h>

int main()
{
    float radius;
    printf ("\nEnter the radius of a circle: ");
    scanf ("%f", &radius);

    printf ("\nThe area of the circle will be: %.2f", 3.14 * radius * radius);
    printf ("\nThe circumference of the circle will be: %.2f", 3.14 * 2.0 * radius);
    
    return 0;
}