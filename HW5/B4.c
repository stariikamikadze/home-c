#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    if (num <= 0) {
            return 1;
        }
    if (num >= 100 && num <= 999) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    
    return 0;
}