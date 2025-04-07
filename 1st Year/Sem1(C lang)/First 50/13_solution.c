// Enter a number and display it is odd or even
#include <stdio.h>

int main () {

    int num;
    printf ("Enter the number: ");
    scanf ("%d", &num);

    if (num % 2 == 0)
    {
        printf ("The given number is even");
    }else
        printf ("The given number is odd");
    
    return 0;
}