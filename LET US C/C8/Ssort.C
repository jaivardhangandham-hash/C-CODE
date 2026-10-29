#include <stdio.h>
int main()
{
    int size , min , temp;
    printf("ENTER SIZE OF ARRAY - ") ; scanf( "%d" , &size ) ;

    int numsarray[size] ;

    printf("ENTER ELEMTENTS OF ARRAY - ") ; 
    for ( int i = 0 ; i < size ; i++ )
    {
        scanf( "%d" , &numsarray[i] ) ;
    }

    for ( int i = 0 ; i < size ; i++ )
    {
        min = i ;

        for ( int j = i+1 ; j < size ; j++ )
        {
            if ( numsarray[i] > numsarray[j] )
            {
                min = j ;
            }

            temp = numsarray[j] ;
            numsarray[j]  = numsarray[i] ;
            numsarray[i] = temp ;
        }
    }

    printf("ELEMENTS AFTER SORTING - ") ; 
    for ( int i = 0 ; i < size ; i++ )
    {
        printf( "%d\t" , numsarray[i] ) ;
    }

    return 0 ;
}