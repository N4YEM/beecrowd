#include <stdio.h>

int main() {
    double s = 0;
    int denom = 1;
    for (int num = 1; num <= 39; num += 2) {
        s += (double)num / denom;
        denom *= 2;
    }
    printf("%.2f\n", s);
    return 0;
}