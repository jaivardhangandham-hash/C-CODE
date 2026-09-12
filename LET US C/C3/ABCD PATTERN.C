#include <stdio.h>
int main()
{
    int x=70;
    for (int count=1 ; count<=6 ; count++)
        {
            for (int a = 65 ; a<=x ; a++)
                {
                    printf("%c ", a);
                }
            printf("\n");
            x--;
        }
    return 0;
}