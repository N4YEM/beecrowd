#include <stdio.h>
int main() 
{
    int n, amount;
    char type;
    int total = 0, rabbits = 0, rats = 0, frogs = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %c", &amount, &type);
        total += amount;
        if (type == 'C') rabbits += amount;
        else if (type == 'R') rats += amount;
        else if (type == 'S') frogs += amount;
    }
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", rabbits);
    printf("Total de ratos: %d\n", rats);
    printf("Total de sapos: %d\n", frogs);
    printf("Percentual de coelhos: %.2lf %%\n", (rabbits * 100.0) / total);
    printf("Percentual de ratos: %.2lf %%\n", (rats * 100.0) / total);
    printf("Percentual de sapos: %.2lf %%\n", (frogs * 100.0) / total);
    return 0;
}