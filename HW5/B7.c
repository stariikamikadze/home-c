#include <stdio.h>
#include <stdlib.h> // Для abs()

int main() 
{
	int num;
    scanf("%d", &num);
    num = abs(num);

    
    int digit_counts[10] = {0};
    int has_duplicate = 0;
    
    while (num > 0) {
        int digit = num % 10;
        digit_counts[digit]++;
        if (digit_counts[digit] >= 2) {
            has_duplicate = 1;
            break;
        }
        num /= 10;
    }

    printf("%s\n", has_duplicate ? "YES" : "NO");
    return 0;
}
