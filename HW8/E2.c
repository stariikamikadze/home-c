#include <stdio.h>

#define SIZE 5

int main() {
    int array[SIZE];
    int min; 

    
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &array[i]);
    }

    min = array[0]; 
    
    
    for (int i = 1; i < SIZE; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    printf("%d", min);

    return 0;
}