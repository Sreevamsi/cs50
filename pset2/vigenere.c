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
    string p, k;
    int x;
    int j = 0;
    
    // sanity check for no. of command line arguments.
    if ( argc == 1 || argc > 2 )
    {
        printf("Please give only the key value as an argument.\n");
        
        return 1;
    }

    // reading the first command line argument as the key
    k = argv[1];

    // making sure only alphabets are there in the key
    for(int i = 0; i < strlen(argv[1]); i++)
    {
        if ( !(((int) k[i] >= 65 && (int) k[i] <= 65 + 26 ) \
                    || ((int) k[i] >= 97 && (int) k[i] <= 97 + 26)) )
        {
            printf("Please enter alphabetical key only.\n");
            return 1;
        }
    }

    p = GetString();

    // enciphering each alphabet in the plain text
    for ( int i = 0, n = strlen(p); i < n; i++)
    {
        // enciphering lower case alphabets
        if ( (int) p[i] >= 97 && (int) p[i] <= ( 97 + 26 ) )
        {
            // calculating the offset based upon the case of the alphabets in the key string
            if ( (int) k[j] >= 97 && (int) k[j] <= ( 97 + 26 ) )
            {
                x = (int) k[j++] - 97;
            }
            else
            {
                x = (int) k[j++] - 65;
            }
            // actual encryption, just like caesar cipher
            printf("%c", ((((int) p[i] - 97) + x) % 26) + 97);
        }
            // enciphering upper case alphabets
        else if( (int) p[i] >= 65 && (int) p[i] <= ( 65 + 26 ) )
        {
            if ( (int) k[j] >= 97 && (int) k[j] <= ( 97 + 26 ) )
            {
                x = (int) k[j++] - 97;
            }
            else
            {
                x = (int) k[j++] - 65;
            } 
            printf("%c", ((((int) p[i] - 65) + x) % 26) + 65);
        }
        // leaving others as is
        else
        {
            printf("%c", p[i]);
        }
        // wrapping the key string
        if ( j == strlen(k) )
        {
            j %= strlen(k); 
        }
    }
    
    printf("\n");
    
    return 0;
}
