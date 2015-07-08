/**
 * Program to print Mario Pyramid
 */

#include <cs50.h>
#include <stdio.h>

void mario(int n);

int main(void)
{
    int n = x = 0;

    while( x == 0)
    {
        printf("Height:");

        n = GetInt();

        if (n == 0)
        {
            return 0;    
        }

        if (n >= 1 && n <= 23)
        {
            mario(n); 
            x = 1;
        }
        else
        {
            continue;
        }
    }
    
    return 0;
}

void mario(int n)
{
    int i, j;

    for(i = 0;i < n; i++)
    {
        for(j = 0; j < (n - i - 1); j++)
        {
            printf(" "); 
        }

        for(j = 0;j <= i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

