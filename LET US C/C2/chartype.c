#include <stdio.h>
int main()
{   char input;
    printf("ENTER A SINGLE CHARACTER - ");scanf("%c",&input);
    if (input>=0 && input<=127)
        if (input>=65 && input<=90 || input>=97 && input<=122)
            {
            if (input>=65 && input<=90)
                printf("%c is a upper case letter",input);
            else
                printf("%c is a lower case letter",input);
            }
        else
            if (input>=48 && input<=57)
                printf("%c is a digit",input);
            else
                printf("%c is a special character",input);
    else 
        printf("NOT A VALID CHARACTER");
    return 0;
}