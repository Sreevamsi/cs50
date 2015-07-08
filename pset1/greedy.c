
/**
 * Program to find minimum number of coins that have
 * to be dispensed while tending change assuming we have
 * only quarters, dimes, nickels, and pennies.
 */

#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float x;
    int  y, quarters, dimes, cents, nickels;
    quarters = dimes = cents = nickels = 0;

    printf("O hai! How much change is owed?\n");

    x = GetFloat();

    while( x < 0.0)
    {
        printf("O hai! How much change is owed?\n"); 
        x = GetFloat();
    }

    y = round(x * 100);

    quarters = y / 25;

    y %= 25;

    dimes = y / 10;

    y %= 10;

    nickels = y / 5;

    y %= 5;

    cents = y;

    printf("%d\n", quarters + dimes + nickels + cents);

    return 0;
}
