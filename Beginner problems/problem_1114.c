#include <stdio.h>
int main() 
{
    int password;
    while (scanf("%d", &password) == 1 && password != 2002) {
        printf("Senha Invalida\n");
    }
    printf("Acesso Permitido\n");
    return 0;
}