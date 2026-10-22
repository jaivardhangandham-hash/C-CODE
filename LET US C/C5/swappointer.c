#include <stdio.h>

int swappt( int* x , int* y ) 
{
    int z = *x ;
    *x = *y ;
    *y = z ;
    return 0 ;
}

int main()
{
    int a , b ;

    printf("ENTER a AND b VALUES - ") ; scanf("%d %d" , &a , &b ) ;
    printf("\na = %d\tb = %d" , a , b ) ;

    swappt ( &a , &b ) ;

    printf("\na = %d\tb = %d" , a , b ) ;

    return 0 ;
}  