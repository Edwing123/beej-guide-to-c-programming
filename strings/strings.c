/*
	Strings in C!
*/

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

void string_literals(void)
{
	// A string literal is a sequense of characters
	// enclosed by double quotes.
	//
	// Some examples:
	//
	// - "Ruth, I'm not okay."
	// - "This is a string literal, well, we are using C!"
	// - "Mmm I like newlines.\n"
}

void string_variables(void)
{
	// Let's assign string literals to variables.
	// Mmm what's the type of such variables?
	// Taking into account that strings are almost
	// like arrays, this means they are pointers.
	//
	// Pointers to what? chars.

	char *welcome_message = "Hello, welcome to this adventure";
	char *game_over_message = "GAME OVER! :(";

	printf("%s.\n", welcome_message);
	printf("%s.\n", game_over_message);
}

void strings_as_arrays(void)
{
	// Remember how when passing arrays to functions we had
	// three data ways to represent the array in the function
	// parameters list:
	//
	// 1. As a pointer to something (e.g, char *).
	// 2. Using the array notation with an explicit size (e.g, char [5]).
	// 3. Same as #2, but the size is omitted. NOTE: this applies for 1d arrays (remember).
	//
	// With strings, the same happens.

	char *name = "Edwin Garcia";

	// "Nearly" equivalent as above.
	char same_name[12] = "Edwin Garcia";

	// Omit the length so the compiler can infer it.
	char another_name[] = "Edwin Garcia";

	// Interesting, [same_name] has an explicit length
	// of 12 chars, however, the inferred lenght for [another_name]
	// is 13. What's going on?
}

void iterate_string(void)
{
	// Since a string is an "array of chars" (reallity being that arrays are sugar over pointers),
	// we can use the indexing syntax to access individual characters.
	char *name = "Edwin";
	size_t len = 5;

	for (size_t i = 0; i < len; i++)
	{
		printf("%zu = %c.\n", i, name[i]);
	}
}

void string_initializers(void)
{
	// There is a difference between `char *` and `char []`.

	char *first_name = "Edwin";

	// first_name is a pointer to the first character in a STRING LITERAL.
	// And even though we can use [] to access individual elements, we can't
	// change their values. The string literal is said to be inmutable.

	// Undefined behaviour.
	// first_name[0] = 'I';

	/*
		  ‘string_initializers’: event 1

			first_name[0] = 'I';
			   ~~~~~~~~~~~~~~^~~~~
								  |
								 (1) write to string literal here

	*/

	// On the other hand, if we use the array notation, what's is happening is that
	// a mutable copy of the string literal is being created and the array is pointing
	// to the first element of that copy.
	char last_name[] = "Garcia";

	// It works fine.
	last_name[0] = 'V';

	printf("%s.\n", last_name);
}

int main(void)
{
	bool show_string_literals = true;
	bool show_string_variables = true;
	bool show_strings_as_arrays = true;
	bool show_iterate_string = true;
	bool show_string_initializers = true;

	if (show_string_literals)
	{
		string_literals();
	}

	if (show_string_variables)
	{
		string_variables();
	}

	if (show_strings_as_arrays)
	{
		strings_as_arrays();
	}

	if (show_iterate_string)
	{
		iterate_string();
	}

	if (show_string_initializers)
	{
		string_initializers();
	}
}
