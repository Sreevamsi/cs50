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
    int n, q, d, c, nickels;
    q = d = c = nickels = 0;

    printf("O hai! How much change is owed?\n");

    x = GetFloat();

    while( x < 0.0)
    {
        printf("O hai! How much change is owed?\n"); 
        x = GetFloat();
    }

    n =  round(x * 100);

    while(n >= 25)
    {
        n -= 25;
        q++;
    }

    while(n >= 10)
    {
        n -= 10;
        d++;
    }

    while(n >= 5)
    {
        n -= 5;
        nickels++;
    }

    while(n >= 1)
    {
        n -= 1;
        c++;
    }

    printf("%d\n", q + d + c + nickels );
    return 0;
}
