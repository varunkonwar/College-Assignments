// Enter three numbers and display the second largest number
#include <stdio.h> 

int main () {
    
    int num1, num2, num3;
    printf (" Enter num1: ");
    scanf ("%d", &num1);
    printf (" Enter num2: ");
    scanf ("%d", &num2);
    printf (" Enter num3: ");
    scanf ("%d", &num3);

    if ((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3))
    {
        printf ("The second largest number is: %d", num1);
    }
    else if ((num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3))
    {
        printf ("The second largest number is: %d", num2);
    }else 
        printf ("The second largest number is: %d", num3);
       
    return 0;
}