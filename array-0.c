/**
 * Sreevamsi Yandrapu
 * sree.vamsi4@gmail.com
 *
 * Initialize and fill an integer array
 */
#include<stdio.h>

int main(void)
{
    int a[5];

    for ( int i = 0; i < 5; i++ )
        a[i] = i;

    for ( int i = 0; i < 5; i++ )
        printf("a[i] = %d\n",a[i]);

    return 0;
}
