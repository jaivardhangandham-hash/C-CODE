#include <stdio.h>
int main()
{   float a,b,d;
    printf("ENTER DISTANCE BTW 2 CITIES (in kms) - ");
    scanf("%f",&d);
    a=d*1000;
    b=a*100;
    printf("DISTACNE IN METRES - %.2f METRES\n",a);
    printf("DISTACNE IN CENTIMETRES - %.2f CENTIMETRES",b);
    return 0;
}
