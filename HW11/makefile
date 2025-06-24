all: prog

prog: main.o temp_api.o
	gcc -g -o main main.o temp_api.o

main.o: main.c
	gcc -g -c -o main.o main.c

temp_api.o: temp_api.c
	gcc -g -c -o temp_api.o temp_api.c

clean:
	del *.o
	del prog.exe