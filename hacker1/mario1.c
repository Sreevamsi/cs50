/**
 * Sreevamsi Yandrapu
 * sree.vamsi4@gmail.com
 *
 * Program to print Mario Pyramids
 */

#include <stdio.h>

int main(void)
{
    int i,j,k,l,n;

    printf("Height:");

    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        for(j=n;j>n-(n-1);j--)
            printf(" ");
        for(k=j;k<=1;k--)
            printf("#");
        printf("  ");
        for(l=k;l<=j;l++)
            printf("i#");
        printf("\n");
    }
}

