#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1001

int main() {
    
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    
    if (input == NULL || output == NULL) {
        printf("Ошибка открытия файлов\n");
        return 1;
    }
    
    char str[MAX_LENGTH];
    
    
    if (fgets(str, MAX_LENGTH, input) == NULL) {
        
        fclose(input);
        fclose(output);
        return 0;
    }
    
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a') {
            str[i] = 'b';
        } else if (str[i] == 'b') {
            str[i] = 'a';
        } else if (str[i] == 'A') {
            str[i] = 'B';
        } else if (str[i] == 'B') {
            str[i] = 'A';
        }
    }
    
    
    fprintf(output, "%s", str);
    
    fclose(input);
    fclose(output);
    return 0;
}