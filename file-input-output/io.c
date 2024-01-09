/*
	File input and output (I/O)

	Whenever we do any kind of I/O operations in C,
	we do so through the means of a `FILE*` data type.

	By default, we get three of these files or streams open:

	- stdin.
	- stdout.
	- stderr.
*/

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
	bool should_show_standard_files = true;

	if (should_show_standard_files)
	{
		// We can reference stdout and pass it to `fprintf`.
		fprintf(stdout, "Hello World.\n");

		// Also the standard error stream.
		fprintf(stderr, "Written to stderr.\n");

		int money;

		// Read from stdin.
		fscanf(stdin, "%d", &money);

		fprintf(stdout, "You got $%d.\n", money);
	}
}
