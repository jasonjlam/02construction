#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct pokemon {
	char *name;
	char *type;
	int level;
  };
struct pokemon pokeSelect () {
    int random = (rand() % 5);
	printf ("%d \n", random);
    struct pokemon pikachu;
	pikachu.name = "Pikachu";
    pikachu.type = "electric";
    pikachu.level = 30;

    struct pokemon gengar;
	gengar.name = "Gengar";
    gengar.type = "ghost";
    gengar.level = 85;

    struct pokemon gallade;
	gallade.name = "Gallade";
    gallade.type = "psychic-fighting";
    gallade.level = 99;

    struct pokemon charizard;
	charizard.name = "Charizard";
    charizard.type = "fire-flying";
    charizard.level = 45;

    struct pokemon greninja;
	greninja.name = "Greninja";
    greninja.type = "water-dark";
    greninja.level = 36;

    struct pokemon arr[]= {pikachu, gengar, gallade, charizard, greninja};

    return arr[random];

}
void pokePrint (struct pokemon p1) {
	printf("Pokemon name: %s \n", p1.name);
	printf("Type: %s \n", p1.type);
	printf("Level: %d \n", p1.level);

}
void pokeModify(struct pokemon* p1, char *newName, char *newType, int newLevel) {
	p1->name = newName;
	p1->type = newType;
	p1->level = newLevel;
}
