#include <stdio.h> // поддключаем стандарную библиотеку

int main ()
{
	int a,b,c,d,f; // инициализируем переменные a b c d f
	scanf("%d%d%d", &a,&b,&c); // считываем input
	d = a + b + c; // вычисляем сумму
	f = a * b * c; // вычисляем  произведение 
	printf("%d+%d+%d=%d\n", a,b,c,d); // выводим на экран результат сложения
	printf("%d*%d*%d=%d", a,b,c,f); // выводим на экран результат умножения
	return 0;
}