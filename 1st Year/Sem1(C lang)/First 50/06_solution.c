// Interchange two numbers without using third variable
#include <stdio.h>

int main()
{
    int num1, num2;
    printf ("Enter Num 1: ");
    scanf ("%d", &num1);
    printf ("Enter Num 2: ");
    scanf ("%d", &num2);

    //INTERCHANGING THE NUMBERS
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf ("\nNow Num 1: %d", num1);
    printf ("\nNow Num 2: %d", num2);

    return 0;
}