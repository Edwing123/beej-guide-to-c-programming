/*
  Getting string length
*/

#include <stdio.h>
#include <string.h>

size_t my_strlen(char *s)
{
  size_t len = 0;

  while (s[len] != '\0')
  {
    len++;
  }

  return len;
}

int main(void)
{
  char *msg = "Hello";    

  // Get the length of the string using the `strlen` function from `string.h`.
  size_t msg_len = strlen(msg);

  printf("The message is %zu bytes long.\n", msg_len);

  // If C doesn't track the length of the string, how is it possible to get its length?

  // Welcome to string termination in C.
  // The author shows two approaches when storing strings in memory:
  //
  // 1. Store the bytes of the string along with a number representing the lenght of the string.
  // 2. Store the bytes of the string, and mark the end of the string with a special byte called the terminator.
  //
  // The author says somethig insightful regarding "why" one should choose an option, or why there's
  // two options in the first place:
  //
  // > If you want strings longer than 255 characters, option 1 requires at least two bytes to store the length.
  // > Whereas option 2 only requires one byte to terminate the string. So a bit of savings there.
  //
  // > Of course, these days it seems ridiculous to worry about saving a byte (or 3-lots of languages will happily let
  // > you have strings that are 4 gigabytes in length). But back in the day, it was a bigger deal.
  //
  // > Back in the day it was a bigger deal.
  //
  // I can tell, less RAM capacity, smaller pointer sizes (the so called WORDS).
  //
  // C took the approach #2: A string is a pointer to the first character, and there is a NULL byte (decimal 0) after
  // the address that holds the last character of the string.
  //
  // Surprise, surprise, when we assign a string literal, C adds an implicit '\0' at the end of the string for us.
  // So:

  char *first_name = "Edwin";

  // Is represented in memory like | 'E' | 'd' | 'w' | 'i' | 'n' | '\0' |
  // And due to this, `strlen` is able to calculate the lenght of the string.
  //
  // Let's implement our own version.

  printf("My firstname is %zu bytes long.\n", my_strlen(first_name));
}

