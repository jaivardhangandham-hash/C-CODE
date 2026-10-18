#include <stdio.h>
int main()
{
    char name[100] ; int i=0 ;
    printf("ENTER A STRING - ") ;
    gets(name) ;
    while(name[i] != '\0')
    {
        i++ ;
    }
    printf("%d" , i) ;
    return 0;
}