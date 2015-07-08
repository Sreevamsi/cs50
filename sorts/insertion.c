/**
 * Sreevamsi Yandrapu
 * sree.vamsi4@gmail.com
 *
 * Insertion Sort
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[] )
{
    int array[argc], element, j, n;

    n = argc;

    for (int i = 0; i < n; i++ )
    {
        array[i] = atoi(argv[i]);
    }
    
    for (int i = 1; i < n; i++ )
    {
        element = array[i];

        j = i;

        while ( j > 0 && array[j-1] > element )
        {
            array[j] = array[j-1];
            j -= 1;
        }

        array[j] = element;
    }

    for (int i = 1; i < n; i++)
        printf("%d\t", array[i]);

    printf("\n");

    return 0;
}
