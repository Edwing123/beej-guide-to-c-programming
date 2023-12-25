// The void keyword is used to indicate
// that the function returns no values or that
// it does not accept parameters (when used in the parameters part).

#include <stdio.h>

void show_welcome_msg(void)
{
    printf("Welcome!\n");
}

int main(void)
{
    show_welcome_msg();
}
