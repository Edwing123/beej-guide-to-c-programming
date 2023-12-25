/*
    The dereferennce operator or indirection operator.
*/

#include <stdio.h>

int main(void)
{
    int money = 3400;

    int *money_ptr = &money;

    // Dereference (read) the value at address money_ptr.
    int value_at_ptr = *money_ptr;

    // Now print it.
    printf("The value at that address is %d.\n", value_at_ptr);

    // Modify the value at money_ptr.
    *money_ptr = (*money_ptr) + 1070;

    // This is as saying: hey computer, set (value at ptr + 1070) at this
    // location.
}
