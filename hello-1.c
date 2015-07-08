#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int c;
    printf("Your name please: ");
    string s = GetString();
    c = printf("Hello, %s!\n",s);
    printf("%i\n",c);
}
