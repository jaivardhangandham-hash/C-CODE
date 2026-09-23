// equilateral traingle with based horizontally
#include <stdio.h>
int main()
{
    int rows ; printf("ENTER NUMBER OF ROWS - ") ; scanf( "%d" , &rows ) ; int x = rows ;
    for ( int count = 1 ; count <= rows ; count++ )
    {
        for ( int tspac = 1 ; tspac <= ( x - 1 ) ; tspac++ )
        {
            printf("\t");
        }

        for ( int star = 1 ; star <= ( 2 * count ) - 1 ; star++ )
        {
            printf("*\t");
        }
        x-- ;
        printf("\n");
    }
    return 0 ; 
}
