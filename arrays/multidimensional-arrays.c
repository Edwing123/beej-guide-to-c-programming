
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROWS 5
#define COLUMNS 5

void display_2d_array(void)
{
	srand(time(NULL));

	// Grid of players.
	// Multidimensional arrays are stored in memory
	// following the row-major order tecnique.
	int grid[ROWS][COLUMNS];

	// Populate the grid with random numbers between 0 and 20.
	for (size_t row = 0; row < ROWS; row++)
	{
		for (size_t column = 0; column < COLUMNS; column++)
		{
			grid[row][column] = rand() % 21;
		}
	}

	// Show the grid, and put an x on numbers between 1 and 5.
	for (size_t row = 0; row < ROWS; row++)
	{
		printf("|");

		for (size_t column = 0; column < COLUMNS; column++)
		{
			int value = grid[row][column];

			if (1 <= value && value <= 5)
			{
				printf("x");
			}
			else
			{
				printf(" ");
			}
		}
		printf("|\n");
	}
}

int main(void)
{
	display_2d_array();

	// Multidimensional array with initializers.
	int coors[3][3] = {
		{1, 1, 1},
		{2, 2, 2},
		{3, 3, 3},
	};

	// We can also use indexes.
	char colors[2][3] = {
		[0] = {'R', 'G', 'B'},
		[1] = {'R', 'G', 'B'},

		// Override 'B' at [1][2].
		[1][2] = 'G',
	};

	for (size_t row = 0; row < 2; row++)
	{
		for (size_t column = 0; column < 3; column++)
		{
			printf("color(%zu, %zu) is %c.\n", row, column, colors[row][column]);
		}
	}
}
