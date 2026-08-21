#include <stdio.h>
 int main()
{
    float salary;
    printf("ENTER YOUR SALARY - ");
    scanf("%f", &salary);
    salary = salary * 40 / 100;
    printf("GROSS SALARY : %.2f", salary);
    return 0;
}