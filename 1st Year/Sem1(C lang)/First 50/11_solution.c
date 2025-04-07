// largest of two numbers
#include <stdio.h>
int main () {

    int num1, num2, num3;
    printf ("Enter the numbers: ");
    scanf ("%d%d%d", &num1, &num2, &num3);

    if (num1 < num2 && num2 > num3)
    {
        printf ("The largest number is: %d", num2);
    }
    else if (num1 > num2 && num1 > num3)
    {
        printf ("The largest number is: %d", num1);
    }else 
        printf ("The largest number is: %d", num3);
       
    return 0;
}