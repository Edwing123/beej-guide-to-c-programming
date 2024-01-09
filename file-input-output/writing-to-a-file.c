/*
	Writing to a file.
*/

#include <stdio.h>

void log_err(char msg[])
{
	fprintf(stderr, "err: %s\n", msg);
}

int main(void)
{
	// Open the file in write mode, "w" also
	// means the file contents will be truncated,
	// that is, they'll get wiped out.
	FILE *fp = fopen("./output.g.txt", "w");
	if (fp == NULL)
	{
		log_err("fopen");
		return 1;
	}

	// fp = stdout;

	// Let's write some text.
	fputc('H', fp);

	fputs("ello.", fp);

	fprintf(fp, " This is nuts.\n");

	fclose(fp);
}
