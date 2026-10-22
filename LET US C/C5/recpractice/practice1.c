// print helloworld n times , n from input
#include <stdio.h>
void main()
{
    int n ; void phw ( int x ) ;
    printf("ENTER n - ") ; scanf( "%d" , &n ) ;

    phw( n ) ;

}
void phw (int x)
{   
    if ( x >= 1)
    { 
        printf("helloworld\n") ;
        phw( x - 1 ) ;
    }
}