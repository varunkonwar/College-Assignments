// making a ||gm (parellelogram)
#include <stdio.h>
int main()
{
    int length, breadth;
    printf ("Enter the length of the ||gm: ");
    scanf ("%d", &length);
    printf ("Enter the breadth of the ||gm: ");
    scanf ("%d", &breadth);
    printf ("\n");

    if (length > 0 && breadth > 0)
    {
        for (int line = 0; line < breadth; line++)
        {
            for (int gaps = 0; gaps < breadth-line; gaps++)
            {
                printf (" ");
            }
            for (int stars = 0; stars < length; stars++)
            {
                printf (" * ");
            }
            printf ("\n");
        }
            
    }else
        printf ("\nNot Possible !\n");

    return 0;
}