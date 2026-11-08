#include <stdio.h>
#include <math.h>
int main()
{
    int num,num1,num2,num3,a,b,c;
    printf("ENTER A 3 DIGIT NUMBER - ");
    scanf("%d",&num);
    num1 = num/100;
    num2 = (num-num1*100)/10;
    num3 = ((num-num1*100)-num2*10);
    a=num1;
    b=num2;
    c=num3;
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

        if (b==0)  
            printf("ZERO ");
        if (b==1)  
            printf("ONE ");
        if (b==2)  
            printf("TWO ");
        if (b==3)  
            printf("THREE ");
        if (b==4)  
            printf("FOUR ");
        if (b==5)  
            printf("FIVE ");
        if (b==6)  
            printf("SIX ");
        if (b==7)  
            printf("SEVEN ");
        if (b==8)  
            printf("EIGHT ");
        if (b==9)  
            printf("NINE ");
    
        if (c==0)  
            printf("ZERO");
        if (c==1)  
            printf("ONE");
        if (c==2)  
            printf("TWO");
        if (c==3)  
            printf("THREE");
        if (c==4)  
            printf("FOUR");
        if (c==5)  
            printf("FIVE");
        if (c==6)  
            printf("SIX");
        if (c==7)  
            printf("SEVEN");
        if (c==8)  
            printf("EIGHT");
        if (c==9)  
            printf("NINE");
    return 0;
}