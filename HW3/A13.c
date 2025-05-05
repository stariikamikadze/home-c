#include <stdio.h> // поддключаем стандарную библиотеку

int main ()
{
	int digit, number, multi;  //инициализируем переменные digit number multi
	scanf("%d", &number);  //считываем input
	multi = 1;   // задаем multi значение 1
	while (number !=0){  //  цикл суммирования цифр числа
	    digit = number % 10;  // получаем послежнее цифру из числа деллением числа на 10
	    multi *= digit;    // добавляем ранее полученную цифру к произведению
	    number /= 10;  // убираем последний разряд в числе
	    
	}
	printf ("%d", multi); // выводим результат на экран
	  
		return 0;
}
