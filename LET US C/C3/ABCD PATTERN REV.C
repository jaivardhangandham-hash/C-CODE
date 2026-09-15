#include <stdio.h>
int main()
{
    int x=65;
    for (int count=1 ; count<=6 ; count++)
        {
            for (int a = 70 ; a>=x ; a--)
                {
                    printf("%c ", a);
                }
            printf("\n");
            x++;
        }
    return 0;
}

// CURRENT OUTPUT
// F E D C B A 
// F E D C B 
// F E D C 
// F E D 
// F E 
// F 

// EXPECTED OUTPUT
// F E D C B A 
//   E D C B A 
//     D C B A 
//       C B A 
//         B A
//           A 