   #include "temp_api.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int add_record(TemperatureRecord *db, int *count, int year, int month, int day, 
               int hour, int minute, int temperature) {
    if (*count >= MAX_RECORDS) return 0;
    if (temperature < -99 || temperature > 99) return 0;
    if (month < 1 || month > 12) return 0;
    if (day < 1 || day > 31) return 0;
    if (hour < 0 || hour > 23) return 0;
    if (minute < 0 || minute > 59) return 0;

    db[*count].year = year;
    db[*count].month = month;
    db[*count].day = day;
    db[*count].hour = hour;
    db[*count].minute = minute;
    db[*count].temperature = temperature;
    (*count)++;
    return 1;
}

int load_from_file(TemperatureRecord *db, int *count, const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) return 0;

    int year, month, day, hour, minute, temp;
    while (fscanf(file, "%d;%d;%d;%d;%d;%d", 
                 &year, &month, &day, &hour, &minute, &temp) == 6) {
        add_record(db, count, year, month, day, hour, minute, temp);
    }

    fclose(file);
    return 1;
}

MonthStats get_month_stats(TemperatureRecord *db, int count, int year, int month) {
    MonthStats stats = {0};
    int sum = 0, records = 0;
    stats.min_temp = 100;
    stats.max_temp = -100;

    for (int i = 0; i < count; i++) {
        if (db[i].year == year && db[i].month == month) {
            sum += db[i].temperature;
            records++;
            if (db[i].temperature < stats.min_temp) 
                stats.min_temp = db[i].temperature;
            if (db[i].temperature > stats.max_temp) 
                stats.max_temp = db[i].temperature;
        }
    }

    if (records > 0) {
        stats.avg_temp = (float)sum / records;
    }
    return stats;
}

YearStats get_year_stats(TemperatureRecord *db, int count, int year) {
    YearStats stats = {0};
    int sum = 0, records = 0;
    stats.min_temp = 100;
    stats.max_temp = -100;

    for (int i = 0; i < count; i++) {
        if (db[i].year == year) {
            sum += db[i].temperature;
            records++;
            if (db[i].temperature < stats.min_temp) 
                stats.min_temp = db[i].temperature;
            if (db[i].temperature > stats.max_temp) 
                stats.max_temp = db[i].temperature;
        }
    }

    if (records > 0) {
        stats.avg_temp = (float)sum / records;
    }
    return stats;
}

void print_stats(TemperatureRecord *db, int count, int year) {
    YearStats y_stats = get_year_stats(db, count, year);
    
    printf("=== Year %d Statistics ===\n", year);
    printf("Average: %.1f°C, Min: %d°C, Max: %d°C\n\n", 
           y_stats.avg_temp, y_stats.min_temp, y_stats.max_temp);
    
    printf("Monthly Statistics:\n");
    for (int month = 1; month <= 12; month++) {
        MonthStats m_stats = get_month_stats(db, count, year, month);
        printf("%02d/%04d: Avg %.1f°C, Min %d°C, Max %d°C\n", 
               month, year, m_stats.avg_temp, m_stats.min_temp, m_stats.max_temp);
    }
}