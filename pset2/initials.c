/**
 * Sreevamsi Yandrapu   
 * sree.vamsi4@gmail.com
 *
 * This program takes a person's name and returns its initials
 */
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = GetString();
    int i = 0;
    
    // changing the case only if the alphabet is in lowercase
    if ( (int) name[0] >= 97 && (int) name[0] <= ( 97 + 26 ) )
    {
        printf("%c",(int) name[0] - 32);
    }
    else 
    {
        printf("%c", (int) name[0]);
    }

    // capitalizing the alphabets after the space character
    while( name[i] != '\0' )
    {
        if ( name[i] == ' ' )
        {
            if ( (int) name[i + 1] >= 97 && (int) name[i + 1] <= ( 97 + 26 ) )
            {
                printf("%c",(int) name[i + 1] - 32);
            }
            else 
            {
                printf("%c", (int) name[i + 1]);
            }
        }
        i++;
    }
    

    printf("\n");

    return 0;
}


