#include <stdio.h>
int main() 
{
    int n;
    double a, b, c, avg;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf %lf", &a, &b, &c);
        avg = (a * 2.0 + b * 3.0 + c * 5.0) / 10.0;
        printf("%.1lf\n", avg);
    }
    return 0;
}