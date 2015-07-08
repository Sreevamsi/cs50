/**
 * Sreevamsi Yandrapu
 * sree.vamsi4@gmail.com
 *
 * Program to encrypt messages using caesar cypher
 */
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    string p;
    
    if ( argc == 1 || argc > 2 )
    {
        printf("Please give only the key value as an argument.\n");
        
        return 1;
    }

    // converting string to int
    int k = atoi(argv[1]);

    p = GetString();

    for ( int i = 0, n = strlen(p); i < n; i++)
    {
        // enciphering lower case alphabets
        if ( (int) p[i] >= 97 && (int) p[i] <= ( 97 + 26 ) )
        {
            printf("%c", ((((int) p[i] - 97) + k) % 26) + 97);
        }
        // enciphering upper case alphabets
        else if( (int) p[i] >= 65 && (int) p[i] <= ( 65 + 26 ) )
        {
            printf("%c", ((((int) p[i] - 65) + k) % 26) + 65);
        }
        // leaving the remaining as is
        else
        {
            printf("%c", p[i]);
        }

    }
    
    printf("\n");
    
    return 0;
}
