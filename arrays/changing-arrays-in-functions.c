/*
	Since arrays are pointers in disguise, and when
	one is passed to a function, what gets actually
	passed is a pointer to the first element of the array,
	we can modify them.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init_array(char *arr, size_t len)
{
	srand(time(NULL));

	for (size_t i = 0; i < len; i++)
	{
		arr[i] = '0' + (char)(rand() % 75);
	}
}

size_t get_char_str_length(char n)
{
	size_t len = 0;

	while ((n / 10) > 0)
	{
		len++;
		n /= 10;
	}

	len++;

	return len;
}

void display_array(char *arr, size_t len)
{
	for (size_t i = 0; i <= len - 8; i += 8)
	{
		for (size_t j = 0; j < 8; j++)
		{
			size_t position = i + j;
			char value = arr[position];
			size_t len = get_char_str_length(value);

			printf("%c/%d(length=%zu, position=%zu).\n", value, value, len, position);
		}
	}
}

#define BUFFER_LENGTH 16

int main(void)
{
	char buffer[BUFFER_LENGTH] = {0};

	init_array(buffer, BUFFER_LENGTH);
	display_array(buffer, BUFFER_LENGTH);
}
