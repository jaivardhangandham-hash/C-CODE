#include <stdio.h>
#include <math.h>
int main()
{
    long long int num ;
    printf("ENTER A NUMBER - ") ; scanf( "%d" , &num ) ;

    double sqrtnum = sqrt(num) ;

    printf( "SQRT OF %d is %f" , num , sqrtnum ) ;

    return 0 ;
}