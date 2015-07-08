/**
 * Sreevamsi Yandrapu
 * sree.vamsi4@gmail.com
 *
 * Creating an array with random integers
 */
#include<stdio.h>

#define MAX 10

int a[MAX];
int rand_seed = 17;

/* returns a random number between 0 and 32767 */
int rand()
{
    rand_seed = rand_seed * 1103515275 + 12345;
    return ( unsigned int )( rand_seed / 65536 ) % 32768;
}

void bubble_sort()
{
    int x,y,t;

     /* bubble sort the array*/
    for ( x = 0; x < MAX - 1; x++ )
        for( y = 0; y < MAX - x - 1; y++ )
            if ( a[y] > a[y + 1] )
            {
                t = a[y];
                a[y] = a[y+1];
                a[y+1] = t;
            }
}

int main(void)
{
    int i;

    /* fill array */
    for(i = 0; i < MAX; i++ )
    {
        a[i] = rand();
        printf("%d\n", a[i]);
    }

    bubble_sort();

       /* print the sorted array */
    printf("-----------------------\n");
    for ( i = 0; i < MAX; i++ )
        printf("%d\n", a[i]);

    return 0;
}
