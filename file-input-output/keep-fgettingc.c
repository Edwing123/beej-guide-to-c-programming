/*
	An exercise program with `fgetc`.
*/

#include <stdio.h>

int main(void)
{
	char filename[] = "./hello.txt";

	FILE *fp = fopen(filename, "r");
	if (fp == NULL)
	{
		// This actually won't work if fp is NULL.
		// int err = ferror(fp);

		int err = 0;
		printf("There is an error %d while opening: %s.\n", err, filename);
		return 1;
	}

	// The number of characters we want to read
	// from the file.
	size_t n;

	scanf("%zu", &n);

	for (size_t i = 0; i < n; i++)
	{
		int chr = fgetc(fp);
		printf("We got: %c.\n", chr);
	}

	int err = fclose(fp);
	printf("fclose returns %d.\n", err);
}
