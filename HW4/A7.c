#include <stdio.h>  // поддключаем стандарную библиотеку

int main ()
{
	int a, b;  //инициализируем переменные a b
	scanf("%d%d", &a, &b); //считываем input
	if (a>b)  // сравниваем a больше b ?
	    printf("%d %d", b,a); // выводим результат на  экран b a
	else     
	    printf("%d %d", a,b); // выводим результат на  экран a b 
	return 0;
}