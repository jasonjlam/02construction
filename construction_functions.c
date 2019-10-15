#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct pokemon {char *type; int level;};
struct pokemon pokeSelect () {
    srand (time(NULL));
    int random = rand() % 5;
    struct pokemon Pikachu;
    Pikachu.type = "electric";
    Pikachu.level = 30;

    struct pokemon Gengar;
    Pikachu.type = "ghost";
    Pikachu.level = 85;

    struct pokemon Gallade;
    Pikachu.type = "psychicfighting";
    Pikachu.level = 99;

    struct pokemon ;
    Pikachu.type = "electric";
    Pikachu.level = 30;

    struct pokemon Pikachu;
    Pikachu.type = "electric";
    Pikachu.level = 30;

}
void pokePrint (struct pokemon p1) {

}
void pokeModify(struct pokemon p1, char *type, int level) {

}
