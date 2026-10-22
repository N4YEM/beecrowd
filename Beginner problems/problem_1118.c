#include <stdio.h>
int main() 
{
    int option = 1;
    while (option != 2) {
        if (option == 1) {
            double score, sum = 0.0;
            int count = 0;
            while (count < 2) {
                scanf("%lf", &score);
                if (score >= 0.0 && score <= 10.0) {
                    sum += score;
                    count++;
                } else {
                    printf("nota invalida\n");
                }
            }
            printf("media = %.2lf\n", sum / 2.0);
            do {
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &option);
            } while (option != 1 && option != 2);
        }
    }
    return 0;
}