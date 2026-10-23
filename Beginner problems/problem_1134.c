#include <stdio.h>
int main() 
{
    int code;
    int alcohol = 0, gasoline = 0, diesel = 0;
    while (1) {
        scanf("%d", &code);
        if (code == 4) break;

        if (code == 1) alcohol++;
        else if (code == 2) gasoline++;
        else if (code == 3) diesel++;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcohol);
    printf("Gasolina: %d\n", gasoline);
    printf("Diesel: %d\n", diesel);
    return 0;
}