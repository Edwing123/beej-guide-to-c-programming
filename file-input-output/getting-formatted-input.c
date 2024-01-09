/*
	Getting formatted input from streams.
*/

#include <stdio.h>

struct character
{
	char *name;
	int level;
	int hp;
};

int read_character(FILE *fp, struct character *character)
{
	char *name = character->name;
	int *level = &character->level;
	int *hp = &character->hp;

	return fscanf(fp, "%s %d %d", name, level, hp);
}

int main(void)
{
	char filename[] = "./characters.txt";

	FILE *fp = fopen(filename, "r");
	if (fp == NULL)
	{
		fprintf(stderr, "err: fopen.\n");
		return 1;
	}

	// Buffers for the name of the characters.
	char names[][128] = {
		{0},
		{0},
		{0},
	};

	// The three characters.
	struct character characters[3] = {
		{.name = names[0]},
		{.name = names[1]},
		{.name = names[2]},
	};

	size_t characters_count = 3;

	size_t i = 0;

	while (read_character(fp, &characters[i]) != EOF)
	{
		i++;
	}

	// Loop the characters.
	i = 0;
	for (; i < characters_count; i++)
	{
		struct character character = characters[i];
		char *name = character.name;
		int level = character.level;
		int hp = character.hp;
		printf("%s(level=%d, hp=%d).\n", name, level, hp);
	}
}
