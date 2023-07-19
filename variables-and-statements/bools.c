/*
  From the begining, C didn't include a boolean data type (true or false).
  Instead, C uses numbers: where 0 means false, and non-zero numbers mean true.

  Having said all that, C89/C90 added a header file with definitions for boolean
  support.
*/

// #include <stdio.h>
#include <stdbool.h>

int main(void)
{
  // A "boolean" variable using the int data type.
  int can_eat = 1;

  if (can_eat) {
    // printf("Yes, this is true.\n");
  }

  // A bool data type.
  bool is_go_cool = true;

  if (is_go_cool) {
    // printf("Go is cool.\n");
  }
}

