/*
    Arrays in C.
*/

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(void)
{
    srand(time(NULL));

    int grades[5];

    for (size_t i = 0; i < 5; i++) {
        grades[i] = rand() % 100;
    }

    for (size_t i = 0; i < 5; i++) {
        int grade = grades[i];

        printf("i = %d.\n", grade);
    }
}
