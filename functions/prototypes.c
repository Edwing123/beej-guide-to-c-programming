/*
    In `functions.c` we had to first define the function `increment_by_one`
    before we could use it inside `main`.
    If such function wasn't declared, we'd get a compiler error.

    In C, we can skip the definition of a function before using, we accomplish
    this by creating function prototypes declarations before the code that uses
    the functions. This way we notify the compiler of the existance of the
    functions.

    A function prototype is basically what in other languages we call
    "the function signature", and in C this is:

    <return type> <func_name>(parameters...);

    Once we do this, we can create the actual implementation of the
    function somewhere else inside our single-file program, or another file!
*/

#include <stdio.h>

// Functions prototypes.
int add(int, int);
int multiply(int, int);

int main(void)
{
    for (int i = 0; i < 2; i++) {
        switch (i) {
            case 0:
                printf("1 + 1 = %d.\n", add(1, 1));
                break;

            case 1:
                printf("1 * 3 = %d.\n", multiply(1, 3));
                break;
            
            default:
                break;
        }
    }
}

// Actual implementations.
int add(int x, int y)
{
    return x + y;
}

int multiply(int x, int y)
{
    return x * y;
}
