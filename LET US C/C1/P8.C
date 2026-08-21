//SUM OF INPUT 5 DIGIT NUMBER DIGITS
#include <stdio.h>
int main()
{
    int num,d1,d2,d3,d4,d5;
    printf("ENTER A 5 DIGIT NUMBER - ");scanf("%d",&num);
    d1=num/10000;
    d2=(num-d1*10000)/1000;
    d3=((num-d1*10000)-d2*1000)/100;
    d4=(((num-d1*10000)-d2*1000)-d3*100)/10;
    d5=(num-d1*10000-d2*1000-d3*100-d4*10);
    printf("THE REVERSE NUMBER IS - %d%d%d%d%d",d5,d4,d3,d2,d1);
    return 0;
}