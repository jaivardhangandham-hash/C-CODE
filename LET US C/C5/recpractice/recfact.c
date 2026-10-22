#include <stdio.h>
int main()
{
    int num , factnum( int x ) ;
    printf("ENTER num - ") ; scanf( "%d" , &num ) ;
    
    if ( num < 0 )
    {
        printf("num IS NOT VALID") ;
        return 0 ;
    }

    else
    {   int fnum = factnum ( num ) ;
        printf("FACTORIAL OF %d IS %d" , num , fnum ) ;
        return 0 ;
    }
}

int factnum ( int x )
{
    if ( x == 0 )
    {
        return 1 ;
    }

    return x * factnum ( x-1 ) ;

}