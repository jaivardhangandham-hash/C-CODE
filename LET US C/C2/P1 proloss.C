#include <stdio.h>
int main()
{
    float CP,SP,P,L;
    printf("COST PRICE = ");scanf("%f",&CP);
    printf("SELLING PRICE = ");scanf("%f",&SP);
    if (SP>=CP)
        if (SP>CP)
            {printf("CONGRATULATION YOU MADE PROFIT");
            printf("\nPROFIT = %.2f RUPEES",SP-CP);}
        else 
            printf("YOU MADE NEITHER PROFIT NOR LOSS");
    else
        {printf("UNFORTUNATELY YOU MADE LOSS");
        printf("\nLOSS = %.2f RUPEES",CP-SP);}
    return 0;
}