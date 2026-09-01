// #include <stdio.h>
// int main()
// {
//     int fact,num;
//     printf("ENTER A NUMBER = ");
//     scanf("%d",&num);
//     if (num!=0)
//         while (num>0)
//             {
//                 fact=num*(num-1);
//                 printf("%d\n",fact);
//                 num--;
//             }
//     else
//         if (num==0)
//             printf("FACTORIAL OF 0 IS O");
//         else 
//             printf("FACTORIAL OF %d IS NOT DEFINED",num);

//     return 0;
// }

#include <stdio.h>
int main()
{
    int num,fact=1;
    printf("ENTER A NUMBER - ");
    scanf("%d",&num);
    while (num!=1)
        {
            fact=fact*num;
            num--;
        }
    printf("FACTORIAL OF %d is %d",num,fact);
    return 0;
}