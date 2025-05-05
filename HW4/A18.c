#include <stdio.h>

int main()
{
    int a, b; //инициализируем переменные
    scanf("%d%d", &a,&b);  //считываем input
    if (a>b) {             // проверяем a больше b ?
        printf("Above");   // выводим на экран ответ Above
    }
    else if (a<b){       // проверяем a меньше b ?
        printf("Less");   // выводим на экран ответ Less
    }
    else {  
        printf("Equal");  // выводим на экран ответ Equal
    }
    return 0;
}