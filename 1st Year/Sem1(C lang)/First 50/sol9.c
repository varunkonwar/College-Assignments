// Enter a number and check if it is greater than 10 or less or equal to it
#include <stdio.h>

int main () {

    float num;
    printf (" Enter your number here: ");
    scanf ("%f", &num);

    if (num < 10)
    {
        printf (" The given number is less than 10");
    }else if (num > 10)
    {
        printf (" The given number is greater than 10");
    }else
        printf (" The given number is equal to 10");
    
    return 0;
}