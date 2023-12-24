/*
    @author Edwing123

    Learning C functions.
*/

#include <stdio.h>

int increment_by_one(int n)
{
    return n + 1;
}

int main(void)
{
    int n = 10;
    int j;

    j = increment_by_one(n);

    printf("The value of n = %d, and j = %d.\n", n, j);
}