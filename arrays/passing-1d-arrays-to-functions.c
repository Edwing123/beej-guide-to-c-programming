/*
	Passing one dimensional arrays to functions.
*/

#include <stdio.h>

// All the following functions accept an array of ints.

// An array as a pointer to its first element.
void times2(int *arr, size_t len)
{
	for (size_t i = 0; i < len; i++)
	{
		printf("%d * 2 = %d.\n", arr[i], arr[i] * 2);
	}
}

// An array using the array syntax (we don't specify a size).
void times3(int arr[], size_t len)
{
	for (size_t i = 0; i < len; i++)
	{
		printf("%d * 3 = %d.\n", arr[i], arr[i] * 3);
	}
}

// An array using the array syntax (we don't specify a size).
// According to the C11 spec, the size doesn't matter to the compiler,
// it only has to be greater than zero.
//
// As a note, the situations where the size matters is when
// passing multidimensional arrays to functions.
void times4(int arr[5], size_t len)
{
	for (size_t i = 0; i < len; i++)
	{
		printf("%d * 4 = %d.\n", arr[i], arr[i] * 4);
	}
}

int main(void)
{
	int grades[] = {88, 78, 68, 95, 85};
	size_t len = 5;

	times2(grades, len);
	times3(grades, len);
	times4(grades, len);
}
