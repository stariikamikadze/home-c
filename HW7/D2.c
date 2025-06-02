#include <stdio.h>

int sum_up_to_N(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sum_up_to_N(n - 1);
    }
}

int main() {
    int N;
    scanf("%d", &N); 
    
    if (N < 1) {
        return 1; 
    }
    
    int result = sum_up_to_N(N);
    printf("%d", result);
    
    return 0;
}