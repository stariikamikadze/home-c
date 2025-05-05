#include <stdio.h>

int main()
{
    int a; //инициализируем переменные
    scanf("%d", &a);  //считываем input
    if (a == 1||a == 2||a == 12){  //проверяем введенную цифру 
        printf("winter");          // и выводим сезон  winter - 1 2 12
    }
    else if (a >= 3 && a <= 5){   //spring 3 4 5
        printf("spring");
    }
    else if (a >= 6 && a <= 8){  //summer 6 7 8
        printf("summer");
    }
    else {                   //  autumn 9 10 11
        printf("autumn");
    }
    return 0;
}