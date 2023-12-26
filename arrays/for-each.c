#include <stdio.h>

void for_each(int *arr, size_t len, void (*fn)(int))
{
	for (size_t i = 0; i < len; i++)
	{
		fn(arr[i]);
	}
}

void print_grade(int grade)
{
	printf("The grade is %d.\n", grade);
}

int main(void)
{
	int grades[] = {88, 76, 67, 87, 94};

	for_each(grades, 5, print_grade);
}
