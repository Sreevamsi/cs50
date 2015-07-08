/**
 * Sreevamsi Yandrapu
 * sree.vamsi4@gmail.com
 *
 * string-0.c
 * Prints each character of a string read from keyboard
 */
#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
    string s = GetString();

    for (int i = 0; i < strlen(s); i++ )
        printf("%c\n", s[i]);
}
