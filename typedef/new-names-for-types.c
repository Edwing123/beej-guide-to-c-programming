/*
	The typedef declaration lets us give
	new names to types:

	`typedef type name-alias-for-type, [another-alias-name,]`.
*/

#include <stdio.h>

// Make an alias for char named byte.
typedef char byte;

// We can define more than one alias name
// for the same type.
typedef unsigned long uint, uint64;

int main(void)
{
	byte buffer[16] = {0};
	size_t len = sizeof(buffer);

	for (size_t i = 0; i < len; i++)
	{
		printf("%zu = %d.\n", i, buffer[i]);
	}

	// 5GiB.
	uint maximum_file_size = 1024 * 1024 * 1024 * 5L;

	// As type.
	uint64 secret_file_size = 1024;

	if (secret_file_size <= maximum_file_size)
	{
		printf("The file size is within the permitted bounds.\n");
	}
	else
	{
		printf("The file size is not within the permitted bounds.\n");
	}

	printf("%zu.\n", sizeof(1024 * 1024 * 1024 * 5L));
}
