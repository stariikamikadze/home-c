#include <stdio.h> // поддключаем стандарную библиотеку

int main ()
{
	int x1,x2,y1,y2;//инициализируем переменные 
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);  //считываем input
	
	double k = (double)(y2-y1)/(x2-x1);  //вычисляем k
	
	double b = y1-k*x1;  // вычисляем b
	
	printf ("%.2f %.2f", k,b); // выводим результат на экран
	  
		return 0;
}