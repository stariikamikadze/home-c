#include <stdio.h>

#define SIZE 10 

int main() {
    int arr[SIZE];
    int min, max;
    int min_index = 0, max_index = 0;

    
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    max = arr[0];

    for (int i = 1; i < SIZE; i++) {
        if (arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
        if (arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
    }

    printf("%d %d %d %d", max_index + 1, max, min_index + 1, min);

    return 0;
}