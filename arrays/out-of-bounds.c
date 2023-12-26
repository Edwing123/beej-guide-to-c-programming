
#include <stdio.h>

int main(void)
{
	// C doesn't perform a memory safety check that many
	// other languages do: checking array out of bounds.

	char grades[2] = {'E', 'G'};

	// So, grades is an int array of two elements, and its available
	// indexes are 0 and 1. But what happens if we go beyond those
	// indexes?

	for (size_t i = 0; i < 10; i++)
	{
		printf("i = %c.\n", grades[i]);
	}

	// Results where i >= 2, we get interesting results.
	// According to the author, the C spec calls this "undefined behaviou",
	// and I understand this means that the results of doing such out-of-bounds
	// array accesses lead to: getting zeroes, getting garbage numbers, or the program
	// crashing altogether:
	//
	// > The C spec says in this circumstance the compiler is allowed to emit
	// > code that does anything.
}
