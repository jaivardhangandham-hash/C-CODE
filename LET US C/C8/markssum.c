#include <stdio.h>
int main()
{
    int marks[5] , sum=0 ;
    for ( int i=0 , count=1 ; i<5 ; i++ , count++ )
    {
        printf("ENTER MARKS IN SUBJECT %d - " , count ) ; scanf( "%d" , &marks[i] ) ;
    }
    for ( int j=0 ; j<5 ; j++ )
    {
        sum = sum + marks[j] ;
    }
    float percent = (float) sum / 5; 
    printf("YOU SCORED %d OUT OF 500 AND SECURED %.2f" , sum , percent ) ;
    return 0;
}