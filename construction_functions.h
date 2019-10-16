struct pokemon {
	char *name;
	char *type;
	int level;
  };

struct pokemon pokeSelect ();
void pokePrint (struct pokemon p1);
void pokeModify(struct pokemon* p1, char *newName, char *newType, int newLevel);
