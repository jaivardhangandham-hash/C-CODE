#include <stdio.h>
int main()
{   
    int num[] = {1,0,7,8,3,7,2,8,0,3,5,7,0} , reqnum , i = 0 , status = 0 ;
    printf("ENTER NUMBER YOU WANT TO FIND - ") ; scanf("%d",&reqnum) ;
    while ( i != 12 )
    {
        if (num[i] == reqnum)
        {
            printf("%d is at index %d\n",reqnum,i);
            status = 1 ;
        }
        i++ ;
    }
    if (status == 0)
    {
        printf("%d is not found",reqnum);
    }
    return 0 ;
}