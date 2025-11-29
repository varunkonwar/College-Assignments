// Enter two numbers and check if the first no. is divisible by the second no. or not
#include <stdio.h> 

int main () {
    
    int num1, num2;
    printf (" Num1: ");
    scanf ("%d", &num1);
    printf (" Num2: ");
    scanf ("%d", &num2);

    if (num1 % num2 == 0)
    {
        printf ("The first number is divisible by second number");
    }else 
        printf ("The first number is not divisible by second number");

    return 0;
}