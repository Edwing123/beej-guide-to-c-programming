/*
	Passing structs to functions.

	We can:

	- Pass a struct to a function.
	- Pass a pointer to a struct to a function.

	Each have their use cases.

	The author mentions two use cases for struct pointers:

	1. When the function needs to modify the struct.
	2. When the struct size is somewhat large, and making a
	   copy would be expensive. So passing a pointer (8 bytes on 64-bit systems)
	   is cheaper in size.

	NOTE: the author says the following:

	> A pointer is likely 8 bytes on a 64-bit system.

	I wonder if there are 64-bit systems which pointers are
	less than 8 bytes.
*/

#include <stdio.h>

struct character
{
	char *name;
	int level;
	int hp;
};

void init_character(struct character *chr, char *name)
{
	// Dereference the struct and assign a value to one of its fields.
	// (*chr).name = name;

	// Or: use the arrow operator, which does the same thing as above.
	chr->name = name;
	chr->level = 1;
	chr->hp = 100;
}

void display_character(struct character *chr)
{
	printf("Name: %s.\n", chr->name);
	printf("Level: %d.\n", chr->level);
	printf("health: %d.\n", chr->hp);
}

int main(void)
{
	struct character me;

	init_character(&me, "Edwing123");

	display_character(&me);
}
