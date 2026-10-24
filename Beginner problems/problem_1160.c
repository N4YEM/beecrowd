#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int pa, pb;
        double g1, g2;
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        int years = 0;
        while (pa <= pb) {
            pa += (pa * g1) / 100;
            pb += (pb * g2) / 100;
            years++;
            if (years > 100) {
                break;
            }
        }
        if (years > 100) {
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", years);
        }
    }
    return 0;
}