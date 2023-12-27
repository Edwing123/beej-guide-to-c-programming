/*
	Copying strings in C.
*/

#include <stdio.h>
#include <string.h>

void my_strcpy(char *dest, char *src);

int main(void)
{
	// The string whose contents we want to copy
	// into another place.
	char msg[] = "Yes";

	// The "string", (basically an array of 32 chars)
	// where the source string will be copied into.
	char buff[32];

	// Copy into dest the contents of src.
	my_strcpy(buff, msg);

	// Now buff first "3 bytes" contain the string "Yes".

	// Now let's change it to "No!".
	buff[0] = 'N';
	buff[1] = 'o';
	buff[2] = '!';

	printf("msg is %s.\n", msg);
	printf("buff is %s.\n", buff);

	// Now I wonder, are NULL terminations copied, too? Yes.
	printf("buff[3] = %d.\n", buff[3]);

	// This means we have to take into account the NULL character
	// byte in the destination buffer size.
}

// One mplementation.
void my_strcpy(char *dest, char *src)
{
	size_t i = 0;
	while ((dest[i++] = src[i]) != '\0')
		;
}
