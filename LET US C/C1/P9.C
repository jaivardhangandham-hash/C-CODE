//SUM OF INPUT 5 DIGIT NUMBER DIGITS
#include <stdio.h>
int main()
{
    int num,d1,d2,d3,d4,d5;
    printf("ENTER A 4 DIGIT NUMBER - ");scanf("%d",&num);
    d1=num/1000;
    d2=(num-d1*1000)/100;
    d3=((num-d1*1000)-d2*100)/10;
    d4=(((num-d1*1000)-d2*100)-d3*10);
    printf("THE SUM OF THE 1ST AND 4TH DIGITS IS - %d",d1+d4);
    return 0;
}