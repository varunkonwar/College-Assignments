// larger of two numbers
#include <stdio.h>
int main () {

    int num1, num2;
    printf ("Enter the numbers: ");
    scanf ("%d %d", &num1, &num2);

    if (num1 < num2)
    {
        printf ("The larger number is: %d", num2);
    }else   
        printf ("The larger number is: %d", num1);
    
    return 0;
}