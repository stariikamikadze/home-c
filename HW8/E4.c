# include <stdio.h>
# include <limits.h>

#define SIZE 10 //задаем размер массива 

int main ()
{
	int array[SIZE]; //инициализируем пременную для массива
	
	for (int i = 0; i<SIZE; i++) // читаем 10 чисел из ввода
	{
		scanf("%d", &array[i]);
	}
	
	int max1 = INT_MIN; //инициализируем две переменных для максимальных значений
	int max2 = INT_MIN;
	
	for (int i = 0; i < SIZE; i++) // поиск двух максимальных элементов
	{
		if (array[i] > max1)
		{
			max2 = max1;   //старый максимум становится вторым 
			max1 = array[i]; //новый максимальный элемент
		}
		else if (array[i] > max2 || array[i] == max1)
		{
			max2 = array[i]; // новый второй максимум
		}
	}
	printf("%d\n", max1 + max2); //выводим на экран сумму переменных max1 и max2 
	
	return 0;
	}
