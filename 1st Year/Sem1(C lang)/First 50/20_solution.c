// calculate average of any five numbers
#include <stdio.h>

int main () {

    int int1, int2, int3, int4, int5, avg;
    printf (" Enter the values: ");
    scanf ("%d%d%d%d%d", &int1, &int2, &int3, &int4, &int5);

    avg = (int1 + int2 + int3 + int4 + int5) / 5;
    printf ("Thus the average of the numbers is: %d", avg);

    return 0;
}