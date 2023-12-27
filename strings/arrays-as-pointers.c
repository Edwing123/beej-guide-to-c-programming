/*
	This is a test to check if you can in-place assign
	an array initializer `{}` to a pointer.
*/

#include <stdio.h>

int main(void)
{
	// Mmm this does not work.
	char *name = {'E', 'd', 'w', 'i', 'n'};

	// This works fine.
	// char name[] = {'E', 'd', 'w', 'i', 'n'};
	printf("My name is %s.\n", name);
}
