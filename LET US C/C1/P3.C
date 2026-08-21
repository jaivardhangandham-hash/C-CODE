#include <stdio.h>
int main()
{
    int a,b,c,d,e,t;
    float p;
    printf("ENTER MARKS IN ALL 5 SUBJECTS [please use space btw the marks] - ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    t= a+b+c+d+e;
    p= t/500*100;
    printf("YOU SCORED - %d/500\nYOUR PERCENTAGE IS - %.3f",t,p);
}