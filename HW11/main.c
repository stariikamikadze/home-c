#include "temp_api.h"
#include <stdio.h>

int main() {
    TemperatureRecord db[MAX_RECORDS];
    int count = 0;
    
    // Загрузка данных из файла
    if (!load_from_file(db, &count, "data.csv")) {
        printf("Failed to load data file\n");
        return 1;
    }
    
    // Вывод статистики
    print_stats(db, count, 2023);
    
    return 0;
}