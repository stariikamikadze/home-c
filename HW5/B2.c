#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a,&b);
    if (a > b) {
            return 1;
        }
    if (a < -100 || a > 100 || b < -100 || b >100) {
        return 1;
    }
    for (int i = a; i <= b; i++) {
        printf("%d ", i * i);
    }
    return 0;
}