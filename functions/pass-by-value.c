// C has pass-by-value semantics when passing function arguments.

#include <stdio.h>

void display_initial(char initial)
{
    char *i = &initial;
    printf("Your initial is %s.\n", i);
}

int main(void)
{
    char my_initial = 'E';
    display_initial(my_initial);
}
