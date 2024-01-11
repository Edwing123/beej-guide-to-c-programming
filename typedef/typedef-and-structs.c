/*
	Using typedef with structs.

	Personally, I like to typedef structs, in that way
	I don't have to type the keyboard `struct`.
*/

#include <stdio.h>

struct animal
{
	char *name;
	size_t legs_count;
};

typedef struct animal Animal;

// Another valid way do it.
typedef struct point
{
	int x, y;
} Point;

typedef unsigned int TokenType;

// Yet another one with anonymous structs.
typedef struct
{
	TokenType type;
	void *content;
} Token;

// We can typedef pointer types, too.
// A pointer to an int.
typedef int *intptr;

typedef struct user
{
	char *name;
	unsigned char age;
} user_t; // <- this is a common naming convention.

int main(void)
{
	Animal michi = {
		.name = "Michi",
		.legs_count = 4,
	};

	Point point = {.x = 1, .y = 6};

	TokenType string_token_type = 1;

	Token string_token = {
		.type = string_token_type,
		.content = "Hello World",
	};

	int age = 22;
	intptr age_ptr = &age;

	(void)michi;
	(void)point;
	(void)string_token_type;
	(void)string_token;
	(void)age;
	(void)age_ptr;

	// The author expresses that he is not fond
	// of this because you lose the ability to see the "*",
	// and this could lead to confusion.
	//
	// To be honest, I agree.

	printf("user_t size is %zu bytes.\n", sizeof(user_t));
}

/*
	The name of the alias follows the same
	identifier rules (see variables.c).

	Regarding the naming case convention, you can do:

	- PascalCase.
	- camelCase.
	- snake_case.
	- SCREAMING_SNAKE_CASE.
	- lowercase.
	- UPPERCASE.

	C has existed for a long time, and even though
	the creators used their own naming convention,
	people has come up with their own:

	> K&R2 uses leading uppercase predominantly,
	> but show some examples in uppercase and snake case (with _t).
*/
