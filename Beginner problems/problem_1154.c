#include <stdio.h>

int main() {
    int age, count = 0;
    double sum = 0;
    while (scanf("%d", &age) && age >= 0) {
        sum += age;
        count++;
    }
    if (count > 0) {
        printf("%.2f\n", sum / count);
    }
    return 0;
}