// Enter a number to check if it is +ve or -ve
#include <stdio.h>
int main () {

    float num;
    printf (" Enter your number here: ");
    scanf ("%f", &num);

    if (num < 0)
    {
        printf (" This is a negative number");
    }else
        printf (" This is a positive number");

    return 0;
}