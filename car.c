#include <stdio.h>
int main (void)
{
    double price, wage, month;
    printf ("\n Please enter the price of the car you want: ");
    scanf ("%lf", &price);
    printf ("\n Please enter your monthly wage: ");
    scanf("%lf", &wage);
    month = price/wage;
    printf ("\n You will be able to buy this car in %lf months.", month);
    return(0);
}