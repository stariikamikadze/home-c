
#ifndef TEMP_API_H
#define TEMP_API_H

#define MAX_RECORDS 1000
#define MONTHS  12

typedef struct {   //структура для входящей записи 
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int temperature;
} TemperatureRecord;

typedef struct {   //структура месячных температур
	float avg_temp;
	int min_temp;
	int max_temp;

} MonthStats;

typedef struct {  // структура годовых температур
	float avg_temp;
	int min_temp;
	int max_temp;
} YearStats;


// Функции работы с данными
int add_record(TemperatureRecord *db, int *count, int year, int month, int day, 
               int hour, int minute, int temperature);
int load_from_file(TemperatureRecord *db, int *count, const char *filename);

// Функции статистики
MonthStats get_month_stats(TemperatureRecord *db, int count, int year, int month);
YearStats get_year_stats(TemperatureRecord *db, int count, int year);
void print_stats(TemperatureRecord *db, int count, int year);

#endif