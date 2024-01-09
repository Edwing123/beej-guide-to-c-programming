/*
	Writing in binary mode.
*/

#include <stdio.h>

struct point
{
	int x, y, z;
};

int main(void)
{
	// A buffer with bytes.
	unsigned char buffer[] = {89, 55, 67, 56, 45, 88, 99, 77};
	size_t buffer_len = sizeof(buffer);

	// "wb" -> write binary mode.
	FILE *fp = fopen("./data.bin", "wb");
	if (fp == NULL)
	{
		fprintf(stderr, "err: fopen.\n");
		return 1;
	}

	/*
		It takes:

		- A pointer of the buffer it'll read from.
		- The size of the data unit, in this case a char.
		- The amount of data (a length) to write.
		- The output stream.
	*/

	fwrite(buffer, sizeof(char), buffer_len, fp);

	fclose(fp);
}
