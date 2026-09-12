#include <stdio.h>
int main()
{   
    int num1;
    printf("ENTER A NUMBER - ");scanf("%d",&num1);
    for (int count=1,num2=1,x;count<=10;count++,num2++)
    {
        x=num1*num2;
        printf("%d * %d = %d\n",num1,num2,x);
    }
    return 0;
}