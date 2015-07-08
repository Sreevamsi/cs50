#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Give temperature in Fahrenheit:");
    float f = GetFloat();
    
    float c = 5.0 / 9.0 * ( f - 32);
    printf("%0.1f\n",c);
}
