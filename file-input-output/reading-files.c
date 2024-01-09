/*
	Reading files.

	The plan is the following:

	- Open the file in reading mode.
	- Read a character out of it.
	- Print the character.
	- Finally, close the file.
*/

#include <stdio.h>

int main(void)
{
	// A FILE* represents a stream of data.
	FILE *fp;

	fp = fopen("./hello.txt", "r");

	if (fp == NULL)
	{
		printf("There was an error.");
		return 1;
	}

	int chr = fgetc(fp);

	printf("The character is %c.\n", chr);

	fclose(fp);
}
