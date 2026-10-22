#include <stdio.h>
int main()
{
    int a , b , c , power ( int x , int y ) ;
    printf("ENTER a AND b values - ") ; scanf("%d %d" , &a , &b ) ;

    c = power ( a , b ) ;

    printf("%d to the power of %d is %d" , a , b , c ) ;

    return 0 ;
}

int power ( int x , int y ) 
{ 
    int z = 1 ;

    for ( int i = 1 ; i <= y ; i++ )
    {
        z = z * x ;
    }

    return z ;
}
