/**
 * Sreevamsi Yandrapu
 * sree.vamsi4@gmail.com
 *
 * Program to encrypt messages using vigenere cypher
 */
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    string p,k;
    int x;
    
    if ( argc == 1 || argc > 2 )
    {
        printf("Please give only the key value as an argument.\n");
        
        return 1;
    }

    k = argv[1];

    for(int i = 0; i < strlen(argv[1]); i++)
    {
        if ( !(((int) k[i] >= 65 && (int) k[i] <= 65 + 26 ) || ((int) k[i] >= 97 && (int) k[i] <= 97 + 26)) )
        {
            printf("Please enter alphabetical key only.\n");
            return 1;
        }
    }

    p = GetString();

    for ( int i = 0, n = strlen(p); i < n; i++)
    {
        for( int j = 0; j < strlen(k); j++ )
        {
            if ( (int) p[i] >= 97 && (int) p[i] <= ( 97 + 26 ) )
            {
                x = (int) k[i] - 97;
                printf("%c", ((((int) p[i] - 97) + x) % 26) + 97);
            }
            else if( (int) p[i] >= 65 && (int) p[i] <= ( 65 + 26 ) )
            {
                x = (int) k[i] - 65;
                printf("%c", ((((int) p[i] - 65) + x) % 26) + 65);
            }
            else
            {
                printf("%c", p[i]);
            }
        }
        

    }
    
    printf("\n");
    
    return 0;
}
