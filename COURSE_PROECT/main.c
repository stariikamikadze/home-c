#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGHT 1024
#define MAX_FIELD_LENGHT 128

int main ()
{
    const char* filename = "data.csv";
    FILE* file = fopen(filename, "r");
    
    if (file == NULL) {
        perror("Ошибка открытия файла");
        return EXIT_FAILURE;
    }
    
    int year = 2025;
    int year_average_temp = 20;
    printf ("Average yearly temperature in %d year - %d C \n", year, year_average_temp);
    return 0;
}