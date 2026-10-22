#include <stdio.h>

int fibseq ( int x ) ;

void main()
{
    int num ;
    printf("ENTER NUMBER OF FIBONACHI TERMS TO BE PRINTED - ") ; scanf( "%d"  , &num ) ;
    printf("FIBONACI SEQUENCE OF %d TERMS - \n" , num ) ;
    for ( int i = 1 ; i <= num ; i++ )
    {
        printf( "%d\n" , fibseq ( i ) ) ;
    }
}

int fibseq ( int x ) 
{
    if ( x == 1 )
    {
        return 0 ;
    }

    if ( x == 2 )
    {
        return 1 ;
    }

    return ( fibseq(x - 1) + fibseq(x - 2) ) ;
}