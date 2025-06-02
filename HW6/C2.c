#include <stdio.h>

int power(int n, int p)
{
    if (p == 0) return 1;
    if (p == 1) return n;
    return n * power(n, p - 1);
}

int main () 
{
    int N, P;
    scanf("%d %d", &N, &P);
    
    int result = power (N, P);
    printf("%d", result);
    return 0;
}