#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX_LINE_LENGHT 1024
#define MAX_FIELD_LENGHT 128

int main(int argc, char *argv[])
{
        int rez=0;
    // opterr=0;//Можно отключить вывод сообщений об ошибках, для этого надо где-то в
    //программе перед вызовом функции вставить opterr=0
    while ( (rez = getopt(argc,argv,"f:m:h")) != -1)
    {
        switch (rez)
        {
            case 'f': printf("found argument \"f = %s\".\n",optarg); 
                const char* filename = "optarg";
    FILE* file = fopen(filename, "r");
    
    if (file == NULL) {
        perror("Ошибка открытия файлаnn");
        return EXIT_FAILURE;
    }break;
            case 'm': printf("found argument \"m = %s\".\n",optarg); break;

            case 'h': printf("found argument \"h = %s\".\n",optarg); 
                    printf ("-h  help,\n -f specify used file,\n -m  specify month,\n");break;
            //case 'd': printf("found argument \"d\"\n"); break;
            case '?': printf("Error found !\n");break;
        }
    }


        int year = 2025;
        int year_average_temp = 20;
        printf("Average yearly temperature in %d year - %d C \n", year, year_average_temp);
        return 0;
}