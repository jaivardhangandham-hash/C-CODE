#include <stdio.h>
void main()
{
    int n ; int summ( int x ) ;
    printf("ENTER n - ") ; scanf( "%d" , &n ) ;

    int sum = summ(n) ;

    printf("SUM OF %d NUMBERS IS %d" , n , sum ) ;
}

int  summ( int x ) 
{
    if ( x == 1 )
    {
        return 1 ;
    }
    
    return x + summ(x-1) ;
}