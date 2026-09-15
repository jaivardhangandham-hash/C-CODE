// EXPECTED OUTPUT 
// A B C D E F F E D C B A 
// A B C D E     E D C B A
// A B C D         D C B A
// A B C             C B A
// A B                 B A 
// A                     A

//VERSION 1 
// #include "stdio.h"
// int main()
// {   int x = 70 , y = 65 ;
//     for (int count = 1 ; count <= 6 ; count++)
//     {
//         for ( char ch1 = 'A' ; ch1 <=x ; ch1++ )
//         {
//             printf("%c\t",ch1);
//         }
//         x--;
//         for ( int ts = 0 ; ts <= (count*2) - 2 ; ts++ )
//         {
//             printf("\t");
//         }
//         for (char ch2 = 'F' ; ch2 >= y ; ch2-- )
//         {
//             printf("%c\t",ch2);
//         }
//         y++;
//         printf("\n\n");
//     }
//     return 0;
// }

//VERSION 2
#include <stdio.h>
int main()
{
    int x=70,y=65;
    for (int row = 1 ; row<=6 ; row++)
    {
        for (char ch1 = 'A' ; ch1<=x ; ch1++)
        {
            printf("%c\t",ch1);
        }
        x--;
        for (int ts = 0 ; ts <= (row-1)*2 ; ts++)
        {
            printf("\t");
        }
        for (char ch2 = 71 - row ; ch2>=y ; ch2--)
        {
            printf("%c\t",ch2);
        }
        
        printf("\n\n");
    }
    return 0;
}