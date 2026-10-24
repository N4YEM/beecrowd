#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n <= 0) return 0;
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", a);
        } else if (i == 1) {
            printf(" %d", b);
        } else {
            int c = a + b;
            printf(" %d", c);
            a = b;
            b = c;
        }
    }
    printf("\n");
    return 0;
}