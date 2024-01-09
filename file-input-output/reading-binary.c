/*
	Reading in binary mode.
*/

#include <stdio.h>

int main(void)
{
	FILE *fp = fopen("data.bin", "rb");
	if (fp == NULL)
	{
		fprintf(stderr, "err: fopen.\n");
		return 1;
	}

	// Read one byte at a time.
	char chr;

	while (fread(&chr, sizeof(char), 1, fp) > 0)
	{
		putchar((int)chr);
		printf("\n");
	}
}
