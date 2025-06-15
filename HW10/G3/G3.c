#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 1001

int main() {
    // Открытие файлов
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    
    // Проверка успешного открытия файлов
    if (input == NULL || output == NULL) {
        printf("Error opening files\n");
        return 1;
    }
    
    char str[MAX_LENGTH];
    
    // Чтение строки из файла
    if (fgets(str, MAX_LENGTH, input) == NULL) {
        // Если файл пустой, закрываем файлы и выходим
        fclose(input);
        fclose(output);
        return 0;
    }
    
    // Удаление символа новой строки, если он есть
    str[strcspn(str, "\n")] = '\0';
    
    int length = strlen(str);
    
    // Обработка пустой строки
    if (length == 0) {
        fclose(input);
        fclose(output);
        return 0;
    }
    
    // Получение последнего символа
    char last_char = str[length - 1];
    int first_output = 1; // Флаг для первого вывода
    
    // Поиск совпадающих символов
    for (int i = 1; i < length - 1; i++) {
        if (str[i] == last_char) {
            if (!first_output) {
                fprintf(output, " "); // Добавляем пробел перед числами, начиная со второго
            }
            fprintf(output, "%d", i+1); // Нумерация с 0
            first_output = 0;
        }
    }
    
    // Закрытие файлов
    fclose(input);
    fclose(output);
    return 0;
