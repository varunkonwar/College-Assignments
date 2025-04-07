// Calculate average of five numbers 
#include <stdio.h>

int main()
{
    float num1, num2, num3, num4, num5, avg;

    printf ("Enter num 1: ");
    scanf ("%f", &num1);
    printf ("Enter num 2: ");
    scanf ("%f", &num2);
    printf ("Enter num 3: ");
    scanf ("%f", &num3);
    printf ("Enter num 4: ");
    scanf ("%f", &num4);
    printf ("Enter num 5: ");
    scanf ("%f", &num5);

    avg = (num1 + num2 + num3 + num4 + num5) / 5.0;
    printf ("The average of the numbers will be: %f", avg);

    return 0;
}