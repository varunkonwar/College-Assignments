// making a trapezoid and reverse 
#include <stdio.h>
void normalshape (int );
void reversedshape (int );

int main()
{
    int breadth;
    printf ("Enter the height of the trapezoid: ");
    scanf ("%d", &breadth);
    printf ("\n");

    if (breadth > 0)
    {
        printf ("Normal: \n");
        normalshape(breadth);
        printf ("\n\n");
        printf ("Reversed: \n");
        reversedshape(breadth);

    }else
        printf ("\nNot Possible !\n");

    return 0;
}
void normalshape (int breadth)
{
    // for the normal trapezoid
    for (int line = 0; line < breadth; line++)
    {
        for (int gaps = 0; gaps < breadth-line-1; gaps++)         // condition can vary depending on lean angle
        {
            printf (" ");
        }
        for (int stars = 0; stars < (2*line)+7; stars++)
        {
            printf ("*");
        }
        printf ("\n");
    }
}
void reversedshape (int breadth)
{
    // for the reversed trapezoid
    for (int line = 0; line < breadth; line++)
    {
        for (int gaps = 0; gaps < line; gaps++)
        {
            printf (" ");
        }
        for (int stars = 0; stars < 3*(breadth-line)+(line); stars++)
        {
            printf ("*");
        }
        printf ("\n");
    }
}