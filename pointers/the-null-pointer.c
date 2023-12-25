/*
    The NULL pointer

    It's a special value that can be assigned to pointer variables
    to indicate the the pointer variable doesn't point to anything.
*/

#include <stddef.h>
#include <stdio.h>

int main(void)
{
    int *ptr = NULL;

    printf("NULL is %p\n", (void *)ptr);
}