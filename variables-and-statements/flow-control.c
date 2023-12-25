/*
  Learning about flow control constructs in C.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  if (true) {
    // The if-else statement.
    int age = 16;
    bool is_adult = age >= 17;

    if (is_adult) {
      printf("The person is adult, in fact, their age is %d.\n", age);
    } else {
      printf("Ahh! the person is under 18...\n");
    }

    float wallet = 3200;
    float car_price = 5100;
    float motocycle_price = 2100;

    if (wallet >= car_price)
    {
      printf("You can by a car.\n");
    }
    else if (wallet >= motocycle_price)
    {
      printf("You can by a motocycle.\n");
    }
    else
    {
      printf("You cannot buy anything, get more money, legally!");
    }
  }

  if (true) {
    // The while loop:
    // execute a block of statements or a single statement
    // while a boolean condition evaluates to true.

    int i = 1;

    while (i < 10)
    {
      printf("The value of i is %d.\n", i);

      // Don't forget to increment i by 1.
      i++;
    }
  }

  if (true) {
    // do-while is like while, but the
    // condition is checked after the iteration.

    int i = 0;
    size_t count = 0;

    // Seed the PRNG.
    srand(time(NULL));
    
    do
    {
      i = rand() % 100;
      printf("i = %d.\n", i);
      count++;
    }
    while (i != 16);

    printf("It tooks %zu iterations to find 16.\n", count);
  }
}
