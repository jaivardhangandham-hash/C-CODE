#include <stdio.h>

int main()
{
    int h ;
    printf("ENTER HEIGHT OF PASCAL TRIANGLE - ") ; scanf( "%d" , &h ) ; printf("\n\n") ;
    for ( int i = 0 ; i < h ; i++ )
    {
        for ( int ts = h-i ; ts >= 1 ; ts-- )
        {
            printf("\t") ;
        }

        for( int n = i , r = 0 ; n >= r ; r++ )
        {
            int fact1 = factnum(n) , fact2 = factnum(r) , fact3 = factnum(n-r) ;
            int outnum = fact1 / ( fact2 * fact3 ) ;
            printf( "%d\t\t" , outnum ) ;
        }

        printf("\n\n") ;
    }
    return 0 ;
}

int factnum(int x)
{
    int factx = 1 ;
    
    if (x == 0)
    {
        return 1 ;
    }
    
    else
    {   for ( int i = 1 ; i <=x ; i++ )
        {
            factx = factx*i ;
        }
        return factx ;
    }
}

/*
    INPUT  -  5
    OUTPUT - 
                                        
                                        1

                                1               1

                        1               2               1

                1               3               3               1

        1               4               6               4               1


*/