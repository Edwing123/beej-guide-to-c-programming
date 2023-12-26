/*
	Arrays and pointers.
*/

#include <stdio.h>

int main(void)
{
	int xs[5] = {1};

	// Get a pointer to the first element of the xs array.
	int *ptr = &xs[0];

	printf("The value of *ptr is %d.\n", *ptr);

	// What we did up there is so common in C that it allows us
	// to use a shorthand.
	ptr = xs;

	// It's the same as getting a pointer to the first
	// element of the array xs.

	printf("The value of *ptr is %d.\n", *ptr);

	// xs[0] is the same as *ptr.
	// This means that the square brackets are
	// syntactic suger over arrays and pointers.
}
