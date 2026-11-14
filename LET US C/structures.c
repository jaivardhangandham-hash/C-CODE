#include <stdio.h>
struct student
{
    char name[100] ;
    char rollnum[10] ;
    char branch[10] ;
    char section ;
    int age ;
};
int main()
{
    struct student s1 = { "JAIVARDHAN" , "26071A62F0" , "CSC" , 'C' , 18 } ;
    printf("NAME - %s\n",s1.name) ;
    printf("ROLL NUMBER - %s\n",s1.rollnum) ;
    printf("BRANCH - %s\n",s1.branch) ;
    printf("SECTION - %c\n",s1.section) ;
    printf("AGE - %d",s1.age) ;
    return 0 ;
}
