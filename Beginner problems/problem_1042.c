#include <stdio.h>
int main() 
{
    int a, b, c, temp;
    scanf("%d %d %d", &a, &b, &c);
    int orig_a = a, orig_b = b, orig_c = c;
    
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }
    
    printf("%d\n%d\n%d\n\n", a, b, c);
    printf("%d\n%d\n%d\n", orig_a, orig_b, orig_c);
    
    return 0;
}