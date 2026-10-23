#include <stdio.h>
int main() 
{
    int n, num = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("%d %d %d PUM\n", num, num + 1, num + 2);
        num += 4;
    }
    return 0;
}