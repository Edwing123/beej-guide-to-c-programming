/*
	Reading files a line at a time.
*/

#include <stdio.h>

void log_error(char *msg)
{
	fprintf(stderr, "err: %s\n", msg);
}

int main(void)
{
	FILE *fp = fopen("./bruce-lee-quote.txt", "r");
	if (fp == NULL)
	{
		log_error("fopen");
		return 1;
	}

	// The line number.
	size_t line_number = 0;

	// The big enough buffer: each element set to 0.
	char buff[128] = {0};

	while ((fgets(buff, sizeof(buff), fp)) != NULL)
	{
		// Increment the line number count since
		// we read a line.
		line_number++;

		printf("%zu | %s", line_number, buff);
	}

	return fclose(fp);
}
