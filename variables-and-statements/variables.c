/*
  Variables

  In C, a variable is a human-readable name that refers
  to a memory location that stores data.

  Naming variables

  Variables can contain the following characters `[A-Za-z0-9_]`. However,
  the following rules must be applied:

  - You can't start a variable name with a digit 0-9.
  - You can't start a variable name with two underscores.
  - You can't start a variable name with an underscore followed by a capital A-Z.

  Variable types

  C includes several data types to represent different kind of data, these are
  some of the most basic:

  - Integer: int.
  - Float: float.
  - Single character: char.
  - A string (sequense of char): char *.
*/

#include <stdio.h>

int main(void)
{
  int i; // This variable holds "signed" integers: -3, 0, 3.
  float f; // This variable holds "signed" floats: -3.1416, 0.50.

  // Let's assign (store) values to those variables (human-readable representation of memory locations).
  // We do that using the assignment operator (the equals sign).
  i = 123;
  f = 3.1416;

  char *s = "Hello C";

  // Now let's display the values those variables store to the screen.
  printf("i is %d, and f is %f, and s is %s.\n", i, f, s);
  printf("The null value of the string = %d.\n", s[7]);
  printf("Hello variables!\n");
}
