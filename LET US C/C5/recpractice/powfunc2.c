#include <stdio.h>
void main()
{

    int a , b ; int atpb( int x , int y ) ;
    printf("ENTER a AND b - ") ; scanf( "%d %d" , &a , &b ) ;

    if ( b >= 0)
    {
        int c = atpb( a , b ) ;
        printf("%d to power %d is %d" , a , b , c ) ;
    }

    else
    {
        b = (-1) * b ;
        int c = atpb( a , b ) ;
        float d = (float)1/c ;
        printf("%d to power %d is %f" , a , -b , d ) ;
    }
}

int atpb ( int x , int y )
{
    if ( y == 0)
    {
        return 1 ;
    }

    return x * atpb ( x , y-1 ) ;
}