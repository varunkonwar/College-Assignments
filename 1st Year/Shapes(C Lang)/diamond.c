// making a diamond (diagonal square)
#include <stdio.h>
int main()
{
    int size;
    printf ("\nEnter the size of the diamond: ");
    scanf ("%d", &size);
    printf ("\n");

    if (size>0)
    {
        for (int i = 0; i < (2*size)-1; i++)            // no of lines
        {
            if (i < size)                               // first half of the shape
            {
                for (int gap = 0; gap < size-i-1; gap++)
                {
                    printf (" ");
                }
                for (int stars = 0; stars < (2*i)+1; stars++)
                {
                    printf ("*");
                }
                printf ("\n");   
            }
            else{     
                int revgap = 0;                                   // second half of the shape
                while (revgap < i-size+1)
                {
                    printf (" ");
                    revgap++;
                }

                for (int revstars = 0; revstars < i-(3*revgap)+size; revstars++)            //derieved from ( i-(2*revgap)+[(line-gap)-(line-size)] )
                {                                                                           // found the formula myself :)
                    printf ("*");
                }
                printf ("\n");
            }
        }
    }else
        printf ("Not Possible !");
    
    return 0;
}