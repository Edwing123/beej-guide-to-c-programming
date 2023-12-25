/*
    Memory and variables.

    Computer memory is where a program's working data is stored.
    In there we have ints, floats, chars, etc.

    Computer memory is divided in a per-byte basis, each byte in
    memory gets assigned an identifier, in this case, a number.

    A simple representation of memory could be:

    ------------------------
    | 0 | 1 | 2 | 3 | 4 | 5 |
    ------------------------

    It's like a continuous line of boxes, and each box
    holds 1 byte of data, and also each box has identifier number.
    This "identifier number" is called a memory address.

    As we have seen in C, we got different data types, each
    holding data of different sizes, for example, an `int` is 4 bytes,
    but it really depends on the computer systems you're using, that is,
    in some computer systems, an `int` could hold less bytes, meaning,
    less data. Quoting the author:

    > Now, not all data types use just a byte. For instance, an int is often
    > four bytes, as is a float, but it really depends on the system.
    > You can use the sizeof operator to determine how many bytes of memory
    > a certain type uses.

    Aha, system dependant. Some answers from this StackOverflow question are insightful:

    https://stackoverflow.com/questions/11438794/is-the-size-of-c-int-2-bytes-or-4-bytes
*/

#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>

void print_size(char *label, size_t size);

int main(void)
{
    print_size("int", sizeof(int));
    print_size("float", sizeof(float));
    print_size("char", sizeof(char));
    print_size("bool", sizeof(bool));

    /*
        The author from the book sometimes adds "fun facts", and for this
        lesson there is one such fun fact:
    
        > Memory Fun Facts: When you have a data type (like your typical int) that uses
        > more than a byte of memory, the bytes that make up the data are always adjacent
        > to one another in memory. Sometimes they’re in the order that you expect, and
        > sometimes they’re not. While C doesn’t guarantee any particular memory order
        > (it’s platform-dependent), it’s still generally possible to write code in a way
        > that’s platform-independent where you don’t have to even consider these pesky byte orderings.

        Let's see an example:
    */

   // Four bytes forming an int: each byte's least significant bit is set to 1, except the right-most byte.
   int n = 0b00000001000000010000000100000010;

   /*
        The number in memory:

        ----------------------------------------------------
        | 0b00000010 | 0b00000001 | 0b00000001 | 0b00000001 |
        ----------------------------------------------------
            ^- This is the least-significant byte.

        My computer is Little Endian, and this means the order is "reversed", that is,
        the bytes forming the int are stored from the least significant byte to the
        most significant byte.
   */

   printf("n is %d.\n", n);

   // So, what's a pointer?
   // A pointer is:
   //
   // - A variable that holds a memory address.
   // - A number representing a location/point in memory.
   // - A number that represents a memory address, and in that memory address there's data.

   char cats_at_home_count = 2;

   // That variable `cats_at_home_count` is a human-readable name to a memory address holding data.
   // Well, the data is of size `sizeof(char)`, on my system that is 1 byte. With this type of
   // variables, we don't get to work with the underlying memory address.

   // Well, C lets us work with memory addresses, and to get the address of the value 2 that
   // `cats_at_home_count` holds, we use the address-of operator (&).

   printf("The value of cats_at_home_count is %d.\n", cats_at_home_count);
   printf("And it's memory address is %p.\n", (void *)&cats_at_home_count);

   // What's the size of a pointer?
   print_size("int *", sizeof(int *));

   // On my system that is 8 bytes, in bits this is 64 bits, and well, this is due to
   // the so called "64 bits systems", right?
}

void print_size(char *label, size_t size)
{
    char *s = size > 1 ? "s" : "";

    printf("The size of %s is %zu byte%s.\n", label, size, s);
}