#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_DIGITS 1001

int main ()
{
	char number[MAX_DIGITS];
	int frequency[10] = {0};
	
	
	if (fgets(number, sizeof(number), stdin) == NULL) //читаем входные данные  числа как строки
	{
		return 1;
	}
	
	size_t len = strlen(number); //удаляем сивол новой строки если он есть
	if (len > 0 && number[len - 1] == '\n')
	{
		number[len-1] = '\0';
		len--;
	}
	
	for (int i = 0; i < len; i++) //подсчет частоты  цифр
	{
		if (isdigit((unsigned char)number[i]))
		{
			int digit = number[i] - '0';
			frequency[digit]++;
		}
	}
	
	for (int digit = 0; digit < 10; digit++)  //выводим на экран результат для каждой цифры
	{
		if (frequency[digit] > 0) 
		{
		printf ("%d %d\n", digit, frequency[digit]);
		}
	}
	return 0;
}
