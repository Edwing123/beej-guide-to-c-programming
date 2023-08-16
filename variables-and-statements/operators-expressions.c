#include <stdio.h>
#include <stdbool.h>

void display_size(char *label, size_t size);

int main(void)
{
  // Arithmetic operators.
  if (true) {
    int i = 0;
    i = i + 1; // Addition (+). It'll add 1 to the value that i stores.
    i = i - 1; // Substraction (-). It'll substract 1 to the value that i stores.
    i = i * 1; // Multiplication.
    i = i / 1; // Division.
    i = i % 1; // Modulo (get remainder from division).

    printf("i = %d\n", i);

    // There are variants of the assignment operator for
    // each of the arithmetic operators.
    i += 1;
    i -= 1;
    i *= 1;
    i /= 1;
    i %= 1;

    printf("i = %d\n", i);
  }

  // Ternary operators.
  if (true) {
    int n = 123;
    bool is_even = n % 2 == 0;
    char *label = is_even ? "even" : "odd";

    printf("%d is an %s number.\n", n, label);
  }

  // Post-{increment/decrement} vs pre-{increment/decrement}.
  // These operators are used to increment/decrement the value
  // a variables stores by one.
  if (true) {
    int n = 1;

    // Increment by one.
    n++;

    // Decrement by one.
    n--;

    // Increment by one.
    ++n;

    // Decrement by one.
    --n;

    // Alright, that's weird! There are two versions of each operator:
    // - One where ++ follows the variable `n`.
    // - One where ++ proceeds the variable `n`.
    //
    // And the same happens for --.
    // So, What's the different?
    //
    // The thing we have to clarify upfront is: both operators
    // increment the value of i by one (in the case of ++), or
    // decrement the value of i by one (in the case of --).
    //
    // The different resides in WHEN the increment/decrement happens:
    // - Does it happen before the expression evaluates to a value?
    // - Does it happen after the expression evaluates to a value?
    //
    // Yes, these operators are expressions, and this means that
    // they RESOLVE to a value. In the previous examples, those operators
    // evaluate to a value, but we've decided to not store the value because
    // all we wanted to do was to increment/decrement the variable.
    //
    // In the case of n++, the increment happens AFTER the expression
    // evaluates, this means that the expression RESOLVES to the
    // current value that n stores, and then the value at n is incremented
    // by one.
    //
    // On the other hand we have ++n, the increment happens BEFORE the expression
    // evaluates, this means that value at n is incremented by one, and the expression
    // RESOLVES to the current value of n.
    //
    // All this applies to the operator --, but this time the value is decremented by one.
    //
    // Let's have some examples.

    int coke_price = 10;
    int cokes_in_stock = 15;
    int wallet = 100;
    int cokes_bought = 0;

    // I want to by a coke.
    wallet -= coke_price;
    cokes_bought++;
    cokes_in_stock--;

    // I want to by a coke. AGAIN.
    wallet -= coke_price;
    cokes_bought++;
    cokes_in_stock--;
    
    // Let's have a summary of my purchases.
    printf("wallet = %d, cokes bought = %d.\n", wallet, cokes_bought);
    printf("coke price = %d, cokes in stock = %d.\n", coke_price, cokes_in_stock);
  }

  // The comma operator.
  if (true) {
    // This operator lets us have two expressions
    // separated by a comma, and the value the expresion itself
    // will RESOLVE to what the expression on the right hand side
    // resolves to. Ugh, does this sound confusing?
    //
    // Basically the expression: `expression1, expression2` resolves
    // to what `expression2` resolves. For example:
    bool first = true;
    bool second = false;
    bool silly_bool = (first, second);

    // For being explicit with the C parser, a pair of parenthesis
    // were added to disambiguate the order of things.

    if (silly_bool == false) {
      printf("Yes, silly_bool is false.\n");
    }

    // If it's still confusing, I think the guide explains it in a concise way:
    // > With the comma operator, the value of the comma expression is the value of the rightmost expression.
  }

  // Comparison operators.
  if (true) {
    int price = 1000;
    int wallet = 50;
    bool cannot_buy = wallet < price;

    if (cannot_buy) {
      printf("You can't buy the product.\n");
    }

    // C has the following comparison operators:
    // ==
    // >
    // <
    // >=
    // <=
    // !=
  }

  // Boolean operators.
  if (true) {
    // Boolean operators operate on boolean values (true or false, or, well, numbers), and
    // they resolve to another boolean value, it's basically the boolean table:
    // and (&&).
    // or (||).
    // not (!).
    bool is_single = true;
    bool is_ziguana = false;

    if (is_single && !is_ziguana) {
      printf("You won't be single if you become a Ziguana.\n");
    }

    int age = 22;
    bool can_join = is_ziguana && age >= 18;

    printf("Can join to the community? %s.\n", can_join ? "Yes" : "No");
  }

  if (true) {
    // The sizeof operator.
    // This operator tells you the size in bytes
    // that a variable or data type uses in memory.
    //
    // The operator resolves to a unsigned integer
    // of type size_t. This special data type is used
    // to represent unsigned integers that represent counts.
    int age = 22;
    bool is_young = false;
    float score = 7.8;

    display_size("int", sizeof(age));
    display_size("boolean", sizeof(is_young));
    display_size("float", sizeof(score));
    display_size("size_t", sizeof(size_t));
  }
}

void display_size(char *label, size_t size)
{
  printf("The size of %s is %zu.\n", label, size);
}

