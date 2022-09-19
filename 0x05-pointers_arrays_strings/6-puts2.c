#include <stdio.h>
#include <string.h>

/**
 *  puts2 - Prints out every other char of the string.
 *  @str: input string to print.
 *
 *  Return void
 */

void puts2(char *str)
{
	unsigned long int i;

	for (i = 0; i < strlen(str); i = i + 2)
	{
		putchar(str[i]);
	}
	putchar(10);
}
