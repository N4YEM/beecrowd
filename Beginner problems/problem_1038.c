#include <stdio.h>

int main() 
{
    int code, qty;
    scanf("%d %d", &code, &qty);

    double total = 0.0;
    if (code == 1) total = qty * 4.00;
    else if (code == 2) total = qty * 4.50;
    else if (code == 3) total = qty * 5.00;
    else if (code == 4) total = qty * 2.00;
    else if (code == 5) total = qty * 1.50;

    printf("Total: R$ %.2lf\n", total);
    return 0;
}