#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    
    char str[MAX_LENGTH + 1];
    
    
    if (fgets(str, MAX_LENGTH + 1, input) == NULL) {
        
        fprintf(output, ", , , 0");
        fclose(input);
        fclose(output);
        return 0;
    }
    
    str[strcspn(str, "\n")] = '\0';
    
    
    int length = strlen(str);
    
    
    fprintf(output, "%s, %s, %s, %d", str, str, str, length);
    
    fclose(input);
    fclose(output);
    return 0;
}
