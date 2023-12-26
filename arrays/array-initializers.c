
#include <stdio.h>

int main(void)
{
	// We can initialize (give values) to an array in-place.
	float grades[5] = {88, 77, 67, 87, 96};

	// This is not valid.
	// grades = {1, 2, 3, 4, 5};

	// If an array initializer contains more elements than the
	// array declaration, the compiler will emit an error.
	// int ages[3] = {22, 17, 17, 14};

	// However, we can specify less elements from that of
	// the array size declared.
	int points[5] = {1, 2, 3};

	// The previous is the same as this:
	// int points[5] = {1, 2, 3, 0, 0};

	// The remaining elements will be set to zero.
	for (size_t i = 0; i < 5; i++)
	{
		printf("i = %d.\n", points[i]);
	}

	// Now I wonder, what if I don't use an initializer?
	// Will the elements still be set to zero?

	// int more_points[5];

	// for (size_t i = 0; i < 5; i++)
	// {
	// 	printf("i = %d.\n", more_points[i]);
	// }

	// Results: the program still compiles, and the values are
	// set to gargabe values apparently. And with all warnings on,
	// I get warnings regarding use of the uninitialized array, however,
	// it still compiles.

	// As we learned, we can have an array initializer which contains
	// fewer elements from the total size of the array, by doing this,
	// the compiler will set the remaining elements to zero.
	//
	// This is apparently common in C:
	char buffer[64] = {0};

	// Here we say that the first element at index 0 is set to zero,
	// then the compiler will set the remaining elements to zero.
	//
	// Nice! we get a buffer with all elements set to zero.element

	for (size_t i = 0; i < (64 - 8); i += 8)
	{
		for (size_t j = 0; j < 8; j++)
		{
			printf("%d ", buffer[i + j]);
		}

		printf("\n");
	}

// Waht is this?
#define BUFFER_SIZE 10

	// With array initializers we can set values at specific indexes.
	char buff[BUFFER_SIZE] = {[0] = 1, [9] = -123};
	size_t buff_len = sizeof(buff) / sizeof(char);

	for (size_t i = 0; i < buff_len; i++)
	{
		printf("i = %d.\n", buff[i]);
	}

	// When initializing an array, we can leave the size off and C
	// will infer its size based on the initializer.
	char initials[] = {'E', 'E', 'G', 'V'};

	// What's the size? It's 4 bytes.
	printf("size of initials %zu.\n", sizeof(initials));

	// Mmm what if I use index initialization(!).
	char friends_initials[] = {[2] = 'R', [5] = 'M', 'Y'};

	// What the size? It's 7 bytes!.
	printf("size of initials %zu.\n", sizeof(friends_initials));

	// I wonder what people have accomplished with this level of flexibility.
}
