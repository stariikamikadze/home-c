#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 101

void count_chars(const char *word, int counts[26]) {
    memset(counts, 0, 26 * sizeof(int));
    for (int i = 0; word[i] != '\0'; i++) {
        if (islower(word[i])) {
            counts[word[i] - 'a']++;
        }
    }
}

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    
    if (input == NULL || output == NULL) {
        printf("Error opening files\n");
        return 1;
    }

    char word1[MAX_LEN], word2[MAX_LEN];
    fscanf(input, "%100s %100s", word1, word2);

    int counts1[26], counts2[26];
    count_chars(word1, counts1);
    count_chars(word2, counts2);

    int first = 1;
    for (char c = 'a'; c <= 'z'; c++) {
        if (counts1[c - 'a'] == 1 && counts2[c - 'a'] == 1) {
            if (!first) {
                fprintf(output, " ");
            }
            fprintf(output, "%c", c);
            first = 0;
        }
    }

    fclose(input);
    fclose(output);
    return 0;
}
