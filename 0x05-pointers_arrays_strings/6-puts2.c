#include <stdio>
#include <string>

/**
 *  puts2 - Prints out every other char of the string.
 *  @str: input string to print.
 *
 *  Return void
 */

void puts2(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			putchar(str[i]);
		i++;
	}
	putchar('\n');
}
