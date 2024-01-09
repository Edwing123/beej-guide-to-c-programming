/*
	The EOF special character.

	This constant is used by functions like fgetc and similars
	to indicate the end of a file when reading it.
*/

#include <stdio.h>

int main(void)
{
	printf("The value of the EOF macro is %d.\n", EOF);

	// We can read all the characters until we get an EOF.
	char filename[] = "./hello.txt";

	FILE *fp = fopen(filename, "r");
	if (fp == NULL)
	{
		printf("err: fopen fail.");
		return 1;
	}

	size_t read_chars = 0;
	int chr;

	while ((chr = fgetc(fp)) != EOF)
	{
		read_chars++;
		printf("%c", chr);
	}

	printf("\n");
	printf("We read %zu bytes.\n", read_chars);

	fclose(fp);
}
