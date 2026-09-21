#include <stdio.h>
int main()
{
    int rows ; printf("ENTER NUMBER OF ROWS - ") ; scanf( "%d" , &rows );
    for ( int count = 1 ; count <= rows ; count++)
    {
        for (int num = 1 ; num <= count ; num++ )
        {
            printf("*  ");
        }
        printf("\n");
    }
    return 0 ;
}