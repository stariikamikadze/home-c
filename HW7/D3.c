#include <stdio.h>

void print_reverse(int n) {
    if (n < 10) {
        printf("%d ", n);
    } else {
        printf("%d ", n % 10);
        print_reverse(n / 10);
    }
}

int main() {
    int N;
    scanf("%d", &N);
    
    if (N == 0) {
        printf("0");
    } else if (N > 0) {
        print_reverse(N);
    }
    
    return 0;
}