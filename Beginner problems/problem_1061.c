#include <stdio.h>
int main() 
{
    int day1, hour1, min1, sec1;
    int day2, hour2, min2, sec2;
    scanf("Dia %d", &day1);
    scanf("%d : %d : %d\n", &hour1, &min1, &sec1);
    scanf("Dia %d", &day2);
    scanf("%d : %d : %d", &hour2, &min2, &sec2);
    long long start_sec = sec1 + min1 * 60 + hour1 * 3600 + day1 * 86400;
    long long end_sec = sec2 + min2 * 60 + hour2 * 3600 + day2 * 86400;
    long long diff = end_sec - start_sec;
    
    int d = diff / 86400;
    diff %= 86400;

    int h = diff / 3600;
    diff %= 3600;

    int m = diff / 60;
    int s = diff % 60;

    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);
    return 0;
}