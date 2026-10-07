#include <stdio.h>
int main()
{
    int m , n , p , q ;
    printf("ENTER ROWS AND COLUMNS FOR FIRST MATRIX (SEPARATE BY SPACE) - ") ; scanf("%d %d", &m , &n ) ;
    printf("ENTER ROWS AND COLUMNS FOR SECOND MATRIX (SEPARATE BY SPACE) - ") ; scanf("%d %d", &p , &q ) ;
    if ( n==p )
    {
        int matrix1[m][n] , matrix2[p][q] , matrix3[m][q] ;
        
        printf("ENTER ELEMENTS OF FIRST MATRIX - ") ;
        for( int i = 0 ; i < m ; i++ )
        {
            for( int j = 0 ; j < n ; j++ )
            {
                scanf( "%d" , &matrix1[i][j] ) ;
            }
        }
        
        printf("ENTER ELEMENTS OF SECOND MATRIX - ") ;
        for( int i = 0 ; i < p ; i++ )
        {
            for( int j = 0 ; j < q ; j++ )
            {
                scanf( "%d" , &matrix2[i][j] ) ;
            }
        }

        
    }
    else
    {
        printf("MATRIX MULTIPLICATION IS NOT POSSIBLE FOR THESE TWO MATRICES");
    }
    return 0 ;
}