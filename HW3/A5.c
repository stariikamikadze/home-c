#include <stdio.h> // поддключаем стандарную библиотеку

int main ()
{
	float a,b,c,d; // инициализируем переменные a b c d
	scanf("%f%f%f", &a,&b,&c); // считываем input
	d = (a + b + c)/3;  // вычисляем среднее арифметическое 
	printf("%.2f", d);  // выводим на экран результат 
	return 0;
}
