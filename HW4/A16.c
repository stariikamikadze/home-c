#include <stdio.h>

int main()
{
    int a, b, c, step1, step2;  //инициализируем переменные
    scanf("%d%d%d", &a,&b,&c); //считываем input
    step1 = (a<b);  // проверяем a меньше b ?
    step2 = (b<c);  // проверяем b меньше c ?
    if (step1 && step2){    // если обе переменные step1 И step2 истинны 
        printf("YES");  // выводим результат на экран
    }
    else {
        printf("NO"); // выводим результат на экран
    }
    return 0;
}