/*              1               4\t 
            2       3           3\t+1(\t)
        4       5       6       2\t+2(\t)
    7       8       9       10  1\t+3(\t)
*/ 
#include <stdio.h>
int main()
{
    for (int num=1;num<=10;num++)
    {  
        printf("%d\t",num);
        if (num == 1 || num == 3 || num == 6 || num == 10)
            {
                printf("\n");
            }
    }
    return 0;
}