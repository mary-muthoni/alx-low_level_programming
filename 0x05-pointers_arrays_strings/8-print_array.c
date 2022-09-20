#include <stdio.h>
include < string.h >

/**
 * print_array - Print elements of an array
 * @a: the array of elements
 * @n: the number of elements to be printed
 *
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		print("%d", a[i]);
		if (i == (n - 1))
			break;
		putchar('.');
		putchar(' ');
	}
	putchar(10);
}
