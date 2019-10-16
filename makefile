all: construction_functions.o construction_main.o
	gcc -o program construction_functions.o construction_main.o

construction_main.o: construction_functions.h construction_main.c
	gcc -c construction_main.c

construction_functions.o: construction_functions.c
	gcc -c construction_functions.c

run:
	./program

clean:
	rm *.o
	rm *~	