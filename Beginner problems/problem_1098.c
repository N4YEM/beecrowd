#include <stdio.h>
int main() 
{
    for (int i = 0; i <= 20; i += 2) 
    {
        for (int j = 1; j <= 3; j++) {
            if (i % 10 == 0) {
                printf("I=%d J=%d\n", i / 10, j + (i / 10));
            } else {
                printf("I=%.1f J=%.1f\n", i / 10.0, j + (i / 10.0));
            }
        }
    }
    return 0;
}