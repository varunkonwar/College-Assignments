// distribute the given amount and show it
#include <stdio.h>
void calculateNotes_Number (int amount);

int main()
{
    int amount;
    printf ("Enter the amount: ");
    scanf ("%d", &amount);

    calculateNotes_Number (amount);

    return 0;
}

void calculateNotes_Number (int amount)
{
    int fifties, twenties, tens, fives;

    fifties = amount / 50;
    amount %= 50;

    twenties = amount / 20;
    amount %= 20;

    tens = amount / 10;
    amount %= 10;

    fives = amount / 5;
    amount %= 5;

    if (fifties > 0) {
        printf("\n50 notes: %d", fifties);
    }
    if (twenties > 0) {
        printf("\n20 notes: %d", twenties);
    }
    if (tens > 0) {
        printf("\n10 notes: %d", tens);
    }
    if (fives > 0) {
        printf("\n 5 notes: %d", fives);
    }
    if (amount > 0)
    {
        printf ("\nRemaining amount: %d", amount);
    }
    

}