#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    
    if (input == NULL || output == NULL) {
        printf("Ошибка открытия файлов\n");
        return 1;
    }
    
    int N;
    fscanf(input, "%d", &N);
    
    
    if (N % 2 != 0 || N > 26) {
        printf("N должно быть четным и ≤ 26\n");
        return 1;
    }
    
    char result[27] = {0}; 
    int even_num = 2;       
    char letter = 'A';      
    
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
      
            result[i] = letter++;
        } else {
            
            result[i] = even_num + '0';
            even_num += 2;
            if (even_num > 8) even_num = 2;
        }
    }
    
    fprintf(output, "%s", result);
    
    fclose(input);
    fclose(output);
    return 0;
}
