#include <stdio.h>
#include <string.h>
int main() 
{
    char w1[20], w2[20], w3[20];

    scanf("%s", w1);
    scanf("%s", w2);
    scanf("%s", w3);

    if (strcmp(w1, "vertebrado") == 0) {
        if (strcmp(w2, "ave") == 0) {
            if (strcmp(w3, "carnivoro") == 0) {
                printf("aguia\n");
            } else {
                printf("pomba\n");
            }
        } else {
            if (strcmp(w3, "onivoro") == 0) {
                printf("homem\n");
            } else {
                printf("vaca\n");
            }
        }
    } else {
        if (strcmp(w2, "inseto") == 0) {
            if (strcmp(w3, "hematofago") == 0) {
                printf("pulga\n");
            } else {
                printf("lagarta\n");
            }
        } else {
            if (strcmp(w3, "hematofago") == 0) {
                printf("sanguessuga\n");
            } else {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}