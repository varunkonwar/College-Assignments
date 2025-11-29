//smaller of two numbers
#include <stdio.h>

int main () {

    int num1, num2;
    printf ("Enter the numbers: ");
    scanf ("%d%d", &num1, &num2);

    if (num1 < num2)
    {
        printf ("The smaller number is: %d", num1);
    }else   
        printf ("The smaller number is: %d", num2);
    
    return 0;
}