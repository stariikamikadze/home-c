#include <stdio.h>

int main()
{
    int a, b, sum = 0;
    scanf("%d%d", &a,&b);
    if (a > b) {
            return 1;
        }
    if (a < -100 || a > 100 || b < -100 || b >100) {
        return 1;
    }
    for (int i = a; i <= b; i++) {
        sum += i*i;
    }
    printf("%d ", sum);
    return 0;
}