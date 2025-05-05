#include <stdio.h> // поддключаем стандарную библиотеку

int main ()
{
	int digit, number, max=0;  //инициализируем переменные 
	scanf("%d", &number);  //считываем input
	max = 0;   // 
	while (number !=0){  //  
	    digit = number % 10;  // получаем послежнее цифру из числа деллением числа на 10
	    max =  digit > max ? digit:max;    // проверяем максимально ли число?
   	    number /= 10;  // убираем последний разряд в числе
	    
	}
	printf ("%d", max); // выводим результат на экран
	  
		return 0;
}