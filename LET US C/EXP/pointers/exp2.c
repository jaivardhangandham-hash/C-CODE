#include <stdio.h>
void main()
{
    int nums[] = {1,2,3,4,5} , *j = nums ;
    for ( int i = 0 ; i<5 ; i++ )
    {
        printf("value at index %d is %d it is stored at memory location %p\n",i,nums[i],(j+i)) ;
    }
}