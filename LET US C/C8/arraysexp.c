#include <stdio.h>
int main()
{
    int d1[3];
    d1[0] = 0 ; d1[1] = 1 ; d1[2] = 2 ; 
    printf("%d\n" , d1[2]);
    d1[2] = 3 ;
    printf("%d\n" , d1[2]);
    return 0 ;
}