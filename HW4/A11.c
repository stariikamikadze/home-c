#include <stdio.h> // поддключаем стандарную библиотеку

int main ()
{
	int a, b, c, d, e, min, max, summ;  //инициализируем переменные a b c max
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);  //считываем input
	min = a < b ? a:b;  //через тернарные операции проверяем какая из переменных меньше
	min = min < c ? min:c;
	min = min < d ? min:d;
	min = min < e ? min:e;
	max = a > b ? a:b;  //через тернарные операции проверяем какая из переменных больше
	max = max > c ? max:c;
	max = max > d ? max:d;
	max = max > e ? max:e;
	summ = min + max; //суммируем  миниму и максимум 
	    printf ("%d", summ); // выводим результат на экран
	  
		return 0;
}
