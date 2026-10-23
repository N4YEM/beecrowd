#include <stdio.h>
int main() 
{
    int x, z, sum = 0, count = 0;
    scanf("%d", &x);
    do {
        scanf("%d", &z);
    } while (z <= x);

    while (sum <= z) {
        sum += x;
        x++;
        count++;
    }
    printf("%d\n", count);
    return 0;
}