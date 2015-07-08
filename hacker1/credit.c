/**
 * Sreevamsi Yandrapu
 * sree.vamsi4@gmail.com
 *
 * Program to validate credit card numbers
 */
#include<cs50.h>
#include<stdio.h>

int checksum(int arr[], int size);

int main(void)
{
    int  j, c, x = 0;
    long long i,n;
    
    printf("Enter:");

    while( x == 0 )
    {
        scanf("%lld", &n);

        for( i = 10, j = 0, c = 1; j != -1; i *= 10 )
        {
            if ( (n / i) > 0 ) 
                c++;
            else
                j = -1;
        }

        if( c == 13 || c == 16 || c == 15 )
        {
            int arr[c];
            long long temp = n;
            
            for( i = c; i > 0; i--)
            {
                arr[i-1] = temp % 10;

                temp = temp / 10;
                if( temp < 10 )
                    {
                        arr[0] = temp;
                        break;
                    }
            }

            if ( !checksum(arr,c) )
            {
                printf("INVALID\n");          
                return 0;
            }

            switch(c)
            {
                case 15:
                    if( arr[0] == 3 && ( arr[1] == 4 || arr[1] == 7) )
                            printf("AMEX\n");
                    break;
                case 13:
                    if( arr[0] == 4 )
                            printf("VISA\n");
                    break;
                case 16:
                    if( arr[0] == 4 && checksum(arr,c) )
                            printf("VISA\n");
                    else if( arr[0] == 5 && ( arr[1] == 1 || arr[1] == 2 || arr[1] == 3 || arr[1] == 4 || arr[1] == 5) )
                            printf("MASTERCARD\n");
                    break;
            }

            x = 1;

        }

        else
        {
            printf("INVALID");
            x = 1;
        }
      }
       
   return 0;
}


int checksum(int arr[],int size)
{
    int sum1 = 0, sum2 = 0, total, temp; 

    for( int i = size - 2; i >= 0; i -= 2 )
    {
       temp = arr[i] * 2;
       if( temp < 10 )
           sum1 += temp;
       else 
           sum1 += ( temp % 10 + 1);
    }

    for( int i = size -1; i >= 0; i-=2 )
        sum2 += arr[i];

    total = sum1 + sum2;

    if( (total % 10) == 0 )
        return 1;
    else 
        return 0;
}

