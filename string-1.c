/**
 * Sreevamsi Yandrapu
 * sree.vamsi4@gmail.com
 *
 * string-1.c
 * Prints each character of a string read from keyboard
 * on a new line only if GetString() doesn't return NULL
 */
#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
    string s = GetString();

    if ( s != NULL )
    {
        for (int i = 0; i < strlen(s); i++ )
        printf("%c\n", s[i]);
    }
}
