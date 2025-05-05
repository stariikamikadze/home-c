#include <stdio.h> // поддключаем стандарную библиотеку

int main ()
{
	int a, b, c, d, e, min;  //инициализируем переменные a b c d e min
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);  //считываем input
	min = a < b ? a:b;  //через тернарные операции проверяем какая из переменных меньше всех
	min = min < c ? min:c;
	min = min < d ? min:d;
	min = min < e ? min:e;
	    printf ("%d", min); // выводим результат на экран
	  
		return 0;
}