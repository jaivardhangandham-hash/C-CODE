//2nums input interchange contents of their location
#include <stdio.h>
int main()
{   int C,D,a,b;
    printf("ENETR 1ST NUMBER - ");a = scanf("%d",&C);
    printf("ENETR 2ST NUMBER - ");b = scanf("%d",&D);
    b=C;
    a=D;
    printf("%d",a);
    printf("\n%d",b);
    return 0;
}