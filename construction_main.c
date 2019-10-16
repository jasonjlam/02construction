#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "construction_functions.h"

int main() {
	srand (time(NULL));
	printf("Randomly print five pokemon \n");
	int i = 0;

	for (i; i < 5; i ++) {
		pokePrint(pokeSelect());
	}
	printf("Print a Zorua \n");
	struct pokemon zorua;
	zorua.name = "Zorua";
	zorua.type = "dark";
	zorua.level = 5;
	pokePrint(zorua);
	printf("Zorua is evolving... \n");
	pokeModify(&zorua, "Zoroark", "dark", 30);
	printf ("Modified Zorua (Zoroark) \n");
	pokePrint(zorua);
	return 0;
}