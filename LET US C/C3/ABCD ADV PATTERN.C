#include <stdio.h>
int main()
{
    int x=71,y=65,s=1,a=65,b=71;
    for (int count=1 ; count<=7 ; count++)
        {
            
            for (int a = 65 ; a<=x ; a++)
                {
                    printf("%c ", a);
                    a++;
                }
            int z=count;
            if (count>1)
                {
                    for (int space=1;space<=z;space=space+2)
                        printf("  ");
                }
            
            for (int b = 71 ; b>=y ; b--)
                {
                    printf("%c ", b);
                    b--;
                }
            printf("\n");
            
            
        }
    return 0;
}