#include <stdio.h>
int main() 
{
    char name[9];
    double b, c, TOTAL;
    scanf("%s", name);
    scanf("%lf %lf", &b,&c);
    TOTAL = b + (c * 0.15);
    printf("TOTAL = R$ %.2lf\n", TOTAL);
    return 0;
}