#include <stdio.h>
int main()
{
    int a,b,NUMBER;
    float c, SALARY;
    scanf("%d %d %f",&a,&b,&c);
    SALARY = (b * c);
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",a,SALARY);
    return 0;
}