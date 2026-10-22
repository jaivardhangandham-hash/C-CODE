#include <stdio.h>

int apcal(int x , float* y , float* z )
{
    *y = 3.14*x*x ;
    *z = 2*3.14*x ;

    return 0 ;
}

int main()
{
    printf("********************AREA AND PERIMETER OF CIRCLE CALCULATION********************\n") ;

    int r ; float a,p ;
    printf("ENTER RADIUS OF CIRCLE - ") ; scanf( "%d" , &r ) ;

    apcal( r , &a , &p ) ;

    printf( "AREA = %f\nPERIMETER = %f" , a , p ) ;

    return 0 ;
}