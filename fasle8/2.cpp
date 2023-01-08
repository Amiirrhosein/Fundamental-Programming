#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

int main()
{
    char str[20] ;

    gets(str) ;

    int length , i , sum = 0 , num ;

    length = strlen(str) ;

    length -- ;

    for ( i = 0 ; i <= length ; i++ )
    {
        if ( str[i] == 'M' )
        {
            num = 1000 ;

            sum = sum + num ;
        }
        else if ( str[i] == 'D')
        {
            num = 500 ;

            sum = sum + num ;
        }
        else if ( str[i] == 'C')
        {
            num = 100 ;

            sum = sum + num ;
        }
        else if ( str[i] == 'L' )
        {
            num = 50 ;

            sum = sum + num ;
        }
        else if ( str[i] == 'X')
        {
            num = 10 ;

            sum = sum + num ;
        }
        else if ( str[i] == 'V')
        {
            num = 5 ;

            sum = sum + num ;
        }
        else if ( str[i] == 'I')
        {
            num = 1 ;

            sum = sum + num ;
        }
    }

    printf("%d" , sum ) ;

    return 0 ;

}

