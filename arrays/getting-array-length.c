/*
    Getting the length of an array.

    Arrays in C don't include information about how many elements
    they have. Due to this, we _can't_ get its length. As usual, there
    are tricks to get the length, but this only works in the scope where
    the array was defined.
*/

#include <stdio.h>

void get_array_size(void)
{
    // The trick is: sizeof(array defined in current scope) / sizeof(array child type).
    int grades[10];

    printf("The size of grades is %zu bytes.\n", sizeof(grades));
    printf("The size of an int is %zu. bytes\n", sizeof(int));
    printf("grades has %zu elements.\n", (sizeof(grades) / sizeof(int)));
}

int main(void)
{
    get_array_size();

    // sizeof works in all data types, even in array types.
    printf("To store a float [100] array, we need %zu bytes.\n", sizeof(float [100]));
}
