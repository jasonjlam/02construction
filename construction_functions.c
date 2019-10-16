#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct pokemon {
  char *type;
  int level;
  };
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
    Pikachu.type = "psychic-fighting";
    Pikachu.level = 99;

    struct pokemon Charizard;
    Pikachu.type = "fire-flying";
    Pikachu.level = 45;

    struct pokemon Greninja;
    Pikachu.type = "water-dark";
    Pikachu.level = 45;

    struct pokemon arr[10];
    arr[0] = Pikachu;
    arr[1] = Gengar;
    arr[2] = Gallade;
    arr[3] = Charizard;
    arr[4] = Greninja;
    return arr[random];

}
void pokePrint (struct pokemon p1) {

}
void pokeModify(struct pokemon p1, char *type, int level) {

}
