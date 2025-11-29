// Enter a number and display if it is divisible by 7 or not
#include <stdio.h>

int main () {

    int num;
    printf ("Enter your number: ");
    scanf ("%d", &num);

    if(num % 7 == 0)
    {
        printf ("The given number is divisible by 7");
    }else
        printf ("The given number is not divisible by 7");

    return 0;
}