#include <stdio.h>
int main()
{   int y;
    printf("ENTER A NUMBER UPTO WHICH U WANT PRIME NUMS - ");
    scanf("%d",&y);
    for(int num=2;num<=y;num++)
    {
        if (num==2)
            printf("%d\t",num);
        else
            for (int i=2;i<=(num-1);i++)
            {
                if (num % i == 0)
                    break;
                else
                    if (i==(num-1))
                    {
                        printf("%d\t",num);
                    } 
            }
    }
    return 0;
}