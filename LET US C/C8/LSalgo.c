#include <stdio.h>

int main()
{
    int count, reqnum, status = 0;

    printf("ENTER NUMBER OF ELEMENTS - ");
    scanf("%d", &count);

    int inputnums[count];

    printf("ENTER %d ELEMENTS - ", count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &inputnums[i]);
    }

    printf("ENTER A NUMBER TO FIND - ");
    scanf("%d", &reqnum);

    for (int j = 0; j < count; j++)
    {
        if (inputnums[j] == reqnum)
        {
            printf("%d is found at index %d of the array", reqnum, j);
            status = 1;
            break;
        }
    }

    if (status == 0)
    {
        printf("%d is not found in the array", reqnum);
    }

    return 0;
}