#include <stdio.h>
int main()
{   int a,b,c,peri,a1;float circum,a2;
    printf("LENGTH  OF RECTANGLE [in metres] = ");scanf("%d",&a);
    printf("BREADTH OF RECTANGLE [in metres] = ");scanf("%d",&b);
    printf("RADIUS OF CIRCLE [in metres] = ");scanf("%d",&c);
    peri=(a+b)*2;
    a1=a*b;
    circum=2*3.14*c;
    a2=3.14*c*c;
    printf(" PERIMETER OF RECTANGE = %d metres\n AREA OF RECTANGLE = %d square metres\n CIRCUMFERENCE OF CIRCLE = %.2f metres \n AREA OF CIRCLE = %.2f square metres",peri,a1,circum,a2);


}
