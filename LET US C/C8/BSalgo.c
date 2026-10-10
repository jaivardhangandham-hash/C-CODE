#include <stdio.h>
int main()
{
    int i ;
    printf("ENTER NUMBER OF ELEMENTS - ") ; scanf( "%d" , &i ) ;
    int num1[i] ;
    
    printf("ENTER ELEMENTS TO BE SORTED - ") ; 
    for ( int count1 = 0 ; count1 < i ; count1++ )
    {
        scanf( "%d" , &num1[count1] ) ;
    }

    for ( int count2 = 0 , swap = 0 ; count2 < (i-1) ; count2++ )
    {
        if ( count2 == 1 && swap == 0)
        {
            break ; 
        }
        for (int count1 = 0 ; count1 < i - 1 ; count1++ )
        {
            if (num1[count1] > num1[count1+1])
            {
                num1[count1]   =  num1[count1] + num1[count1+1] ;
                num1[count1+1] =  num1[count1] - num1[count1+1] ;
                num1[count1]   =  num1[count1] - num1[count1+1] ;
                swap++ ; 
            }
        }
    }
    
    //output formatting
    printf("THE ELEMENTS ARE SORTED WITH BUBBLE SORT (ASCENDING ORDER) - ") ;
    printf("[ ") ;
    for ( int count1 = 0 ; count1 < i ; count1++ )
    {   
        if ( count1 == (i-1) )
        {
            printf( "%d ]" , num1[count1]) ;
        }
        else
        {
            printf( "%d , ", num1[count1] ) ; 
        }
    }

    return 0 ;
}