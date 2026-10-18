#include <stdio.h>
int main() 
{  
    int initial_h, initial_m, final_h, final_m;
    scanf("%d %d %d %d", &initial_h, &initial_m, &final_h, &final_m);
    int start_total = initial_h * 60 + initial_m;
    int end_total = final_h * 60 + final_m;
    if (end_total <= start_total) {
        end_total += 24 * 60;
    }
    int duration = end_total - start_total;
    int duration_h = duration / 60;
    int duration_m = duration % 60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration_h, duration_m);
    return 0;
}