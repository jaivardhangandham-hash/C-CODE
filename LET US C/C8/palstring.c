    #include <stdio.h>
    #include <string.h>
    int main()
    {
        char num1[100] , num2[100] ;
        printf("ENTER A NUMBER - ") ;
        gets(num1) ;
        strcpy( num2 , num1 ) ;
        strrev(num1) ;
        if ( strcmp( num1 , num2 ) == 0 )
        {
            printf( "%s is a palindrome" , num2 ) ;
        }
        else
        {
            printf( "%s is not a palindrome" , num2 ) ;
        }
        return 0 ;
    }