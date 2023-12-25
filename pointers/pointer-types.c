/*
    Pointer types.

    In the previous lesson we learned about the address-of operator,
    as an operator in a expression involving only itself (e.g, `&foo`),
    it resolves to a number representing a memory address/location/point.

    Also, since it's an expression that resolves to a number, it means
    we can store it in a variable, right?

    Aha, but what's the data type that could store such a number? An int?
    A float? A char?.

    Well, if we remember the previous lesson, I check the size of `int *`.
    And on my 64 bits system the result was that a pointer is 8 bytes long.

    So, we cannot store it in an int variable because it has a size of 4 bytes.
    Neither a float, which has 4 bytes in size.
    
    Mmm is there a 64 bits data type in C?

    Well, the thing is that C provides data types for representing points:

    The syntax of a pointer type is: <data type> *.

    Interesting how we get to define the data type that the pointer
    is pointing to!.

    So, `int *` means a pointer pointing (pointy pointer!) to a memory location
    storing an int. Well, an int has a size of 4 bytes, so to be expecifics,
    the pointer is the location of the first byte of an int.

    The question now is: why do we specify the type?

    The answer is: the type determines how many bytes form the data.
    If `int *` is a pointer to an int's first byte, then when we read
    its value, the compiler will known that it'll have to add instructions
    to read four bytes from memory:

    This StackOverflow gives more reasons:

    https://stackoverflow.com/a/12530898
*/

#include <stdio.h>

int main(void)
{
    // A variable storing an int, an int variable.
    int n;

    // A variable storing a pointer to an int, an int pointer.
    int *ptr;

    // These variables are uninitialized, they store gargabe.

    printf("n = %d.\n", n);

    // Well, ptr prints (nil).
    printf("ptr = %p.\n", (void *)ptr);

    ptr = &n;

    // Interesting, if I assign &n to ptr, both prints now print
    // the address of n.
    printf("ptr = %p.\n", (void *)ptr);

    // Since n is of type int, doing &n resolves to a value of
    // type int-pointer.
}
