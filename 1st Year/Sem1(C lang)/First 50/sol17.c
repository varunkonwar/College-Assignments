/*Enter a number and check to which group the number will belong. 
The groups are: 0-9, 10-19, 20-29 */
#include <stdio.h>

int main () {

    int num;
    printf ("Enter your number: ");
    scanf ("%d", &num);

    if (num >= 0 && num <= 9)
    {
        printf ("The given number is between 0 and 9");
    }else if (num >= 10 && num <= 19)
    {
        printf ("The given number is between 10 and 19");
    }else if (num >= 20 && num <= 29)
    {
        printf ("The given number is between 20 and 29");
    }else
        printf ("The given number doesn't belong to any above specified group");

    return 0;
}