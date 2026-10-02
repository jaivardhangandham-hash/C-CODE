#include <stdio.h>
int main()
{
    int i ;
    printf("ENTER NUMBER OF ELEMENTS - ") ; scanf( "%d" , &i ) ;
    int num[i] ;
    
    printf("ENTER ELEMENTS TO BE SORTED - ") ; 
    for ( int count1 = 0 ; count1 < i ; count1++ )
    {
        scanf( "%d" , &num[count1] ) ;
    }
    
    for ( int count2 = 0 ; count2 < (i-1) ; count2++ )
    {
        
    }
    
    
    //output formatting
    printf("THE ELEMENTS ARE SORTED WITH BUBBLE SORT (ASCENDING ORDER)\n") ;
    printf("[ ") ;
    for ( int count1 = 0 ; count1 < i ; count1++ )
    {   
        if ( count1 == (i-1) )
        {
            printf( "%d ]" , num[count1]) ;
        }
        else
        {
            printf( "%d , ", num[count1] ) ; 
        }
    }

    return 0 ;
}