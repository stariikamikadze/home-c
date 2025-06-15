#include <stdio.h>

#define N 5

int main() {
    int arr[N];
    int sum = 0;

    
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    
    double average = (double)sum / N;

    printf("%.3f\n", average);

    return 0;
}