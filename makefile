all: main_program.o min_count.o
	gcc main_program.o min_count.o && del *.o

main_program.o: main_program.c
	gcc -c main_program.c

min_count.o: min_count.c
	gcc -c min_count.c