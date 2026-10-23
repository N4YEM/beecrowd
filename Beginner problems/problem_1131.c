#include <stdio.h>
int main() 
{
    int inter, gremio, option;
    int matches = 0, inter_wins = 0, gremio_wins = 0, draws = 0;
    do {
        scanf("%d %d", &inter, &gremio);
        matches++;

        if (inter > gremio) inter_wins++;
        else if (gremio > inter) gremio_wins++;
        else draws++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &option);
    } while (option == 1);

    printf("%d grenais\n", matches);
    printf("Inter:%d\n", inter_wins);
    printf("Gremio:%d\n", gremio_wins);
    printf("Empates:%d\n", draws);

    if (inter_wins > gremio_wins) printf("Inter venceu mais\n");
    else if (gremio_wins > inter_wins) printf("Gremio venceu mais\n");
    else printf("Nao houve vencedor\n");
    return 0;
}