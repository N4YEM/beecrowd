#include <stdio.h>
int main() 
{
    int m, n, temp;
    while (scanf("%d %d", &m, &n) == 2 && m > 0 && n > 0) {
        int sum = 0;
        if (m > n) 
        {
            temp = m;
            m = n;
            n = temp;
        }
        for (int i = m; i <= n; i++) 
        {
            printf("%d ", i);
            sum += i;
        }
        printf("Sum=%d\n", sum);
    }
    return 0;
}