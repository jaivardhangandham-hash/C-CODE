#include <stdio.h>
#include <math.h>

int main()
{
    int num,count=0,newnum=1,power=10,pval,a=1;
    printf("ENTER A NUMBER - ");
    scanf("%d",&num);
    if (num>0)
    {
        while (newnum>0)
            {
                newnum=num/power;
                power=power*10;
                count++;
            }
        while (count>0)
        {
            a=num*100/power;
            num=num-a*power/100;
            power=power/10;
            if (a==0)  
            printf("ZERO ");
            if (a==1)  
                printf("ONE ");
            if (a==2)  
                printf("TWO ");
            if (a==3)  
                printf("THREE ");
            if (a==4)  
                printf("FOUR ");
            if (a==5)  
                printf("FIVE ");
            if (a==6)  
                printf("SIX ");
            if (a==7)  
                printf("SEVEN ");
            if (a==8)  
                printf("EIGHT ");
            if (a==9)  
                printf("NINE ");
        count--;
        }
    }
    else
        printf("ZERO");
    return 0;
}