/*
    Passing pointers as function arguments.

    The real power with pointers come when you use them
    in functions calls (well, there's more to it, but let's
    keep it simple).
*/

#include <stdio.h>
#include <stdbool.h>

void check_is_adult(int age, bool *ptr)
{
    *ptr = age >= 18;
}

void get_initials(char *first, char *second)
{
    *first = 'E';
    *second = 'G';
}

int main(void)
{
    int age;

    printf("What's your age?\n");
    scanf("%d", &age);

    bool is_adult;
    check_is_adult(age, &is_adult);

    if (is_adult) {
        printf("You are an adult.\n");
    } else {
        printf("You are not an adult.\n");
    }

    
    /*
        Haha, well, there's a reason I have to do this:

        initials char array:
        -----------------
        | (0) | (1) | (2) | (3) |
        -----------------
    */

    char * first;
    char * second;

    char initials[4];
    initials[1] = '\0';
    initials[3] = '\0';

    first = &initials[0];
    second = &initials[2];

    get_initials(first, second);

    printf("%s.\n", first);
    printf("%s.\n", second);

    printf("Your initials are: %s%s.\n", first, second);
}