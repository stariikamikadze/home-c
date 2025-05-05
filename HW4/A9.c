#include <stdio.h> // поддключаем стандарную библиотеку

int main ()
{
	int a, b, c, d, e, max;  //инициализируем переменные a b c max
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);  //считываем input
	max = a > b ? a:b;  //через тернарные операции проверяем какая из переменных больше
	max = max > c ? max:c;
	max = max > d ? max:d;
	max = max > e ? max:e;
	    printf ("%d", max); // выводим результат на экран
	  
		return 0;
}
