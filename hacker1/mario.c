/**
 * Sreevamsi Yandrapu
 * sree.vamsi4@gmail.com
 *
 * Program to print Mario Pyramids
 */

#include <stdio.h>

int main(void)
{
    int i,j,n,x=0;

    while( x == 0)
    {
        printf("Height:");

        scanf("%d",&n);

        if(n==0)
            return 0;    
        
        if(n>=1 && n<=23)
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<(n-i-1);j++)
                    printf(" "); 
                for(j=0;j<=i;j++)
                    printf("#");
                printf("  ");
                for(j=0;j<=i;j++)
                    printf("#");
                printf("\n");
            }  
            x = 1;
        }
        else
        {
            continue;
        }
    }
    
    return 0;
}

