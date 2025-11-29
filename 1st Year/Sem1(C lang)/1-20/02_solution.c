// calculate the final price after 15% discount
#include <stdio.h>
float dodiscount (float price);

int main ()
{
    float price, finalPrice;
    printf ("Enter the price: ");
    scanf ("%f", &price);

    finalPrice = dodiscount (price);
    printf ("The discounted price will be: %.2f", finalPrice);

    return 0;
}
float dodiscount (float price)
{
    float lastprice;
    lastprice = price - (price *15/100.0);
    
    return lastprice;
}