#include <stdio.h>
int main () {

    float num1, num2, num3, percentage;
    printf ("Marks in Subject 1: ");
    scanf ("%f", &num1);
    printf ("Marks in Subject 2: ");
    scanf ("%f", &num2);
    printf ("Marks in Subject 3: ");
    scanf ("%f", &num3);

    percentage = (num1 + num2 + num3) / 3.0;

    if (percentage >= 60.0)
    {
        printf ("You secured first division with a percentege of %f", percentage);
    }else if (percentage >= 45.0)
    {
        printf ("Your secured second division with a percentage of %f", percentage);
    }else
        printf ("You failed your exams :( ");

    return 0;
}