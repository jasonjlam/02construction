#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "construction_functions.h"

int main() {
	srand (time(NULL));
	int i = 0;
	for (i; i < 5; i ++) {
		pokePrint(pokeSelect());
	}
	struct pokemon zorua;
	zorua.name = "Zorua";
	zorua.type = "dark";
	zorua.level = 5;
	pokePrint(zorua);
	pokeModify(&zorua, "Zoroark", "dark", 30);
	pokePrint(zorua);
	return 0;
}