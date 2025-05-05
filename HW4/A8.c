#include <stdio.h> // поддключаем стандарную библиотеку

int main ()
{
	int a, b, c, max;  //инициализируем переменные a b c max
	scanf("%d%d%d", &a, &b, &c);  //считываем input
	max = a; //придаем переменной max значение переменной a
	if (b>max) {  //сравниваем max и b  если b  больше max приравниваем max значение b
	    max = b;
	}
	if (c>max) {  //сравниваем  max и c если c больше max приравниваем max значение c
	    max = c;
	}
	    printf ("%d", max); // выводим результат на экран
	  
		return 0;
}
