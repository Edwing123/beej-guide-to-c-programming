/*
	Passing multidimensional arrays to functions.

	In general, when defining a multidimensional data type
	in a function, all the dimensions are required, except
	the first one.
*/

#include <stdio.h>

void display_2d_grid(int arr[3][3])
{
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			int n = arr[i][j];
			printf("%d at (row=%zu, column=%zu), ", n, i, j);
		}

		printf("\n");
	}
}

// This is the same prototype as `display_2d_grid`.
// void display_2d_grid(int arr[][3]);

int main(void)
{
	int grid[3][3] = {
		{1, 2, 3},
		{4, 4, 5},
		{7, 8, 9},
	};

	display_2d_grid(grid);
}
