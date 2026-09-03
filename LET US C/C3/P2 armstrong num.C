#include <stdio.h>
int main()
{
    int num,a,b,c;
    for (num=1;num<=500;num++)
        {
            a=num/100;
            b=(num-a*100)/10;
            c=((num-a*100)-b*10);
            if (num==a*a*a+b*b*b+c*c*c)
                printf("%d  ",num);
            
        } 
    return 0;
}