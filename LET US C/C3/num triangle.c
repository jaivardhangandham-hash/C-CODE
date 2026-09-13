/*              1               4\t 
            2       3           3\t+1(\t)
        4       5       6       2\t+2(\t)
    7       8       9       10  1\t+3(\t)
*/ 
#include <stdio.h>
int main()
{   int x=1;
    for (int count=1 ; count<=4 ; count++)
    {   
        for(int ts=4-count;ts>=0;ts--)
        {
            printf("\t");
        }
        for (int num=1;num<=count;num++,x++)
        {
           printf("%d\t\t",x);
        }
        printf("\n");
    }
    return 0;
}