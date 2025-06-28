#include <stdio.h>

#define SIZE 10 

int main()
{//объявляем пременные 
	int array[SIZE];// переменная для масива из SIZE  элементов
	int sum = 0; // переменная для хранения суммы
	
	for (int i =0; i < SIZE; i++) //читаем SIZE чисел из ввода 
	{
		scanf("%d", &array[i]);
	}
	
	for (int i = 0; i < SIZE; i++) //считаем сумму положитеьных элементов
	{
		if (array[i] > 0)  //проверяем положительное ли число
		{
			sum += array[i]; //Добавляем к сумме
		}
	}
	
	printf("%d\n", sum); //выводим результат на экран
	return 0;
}
