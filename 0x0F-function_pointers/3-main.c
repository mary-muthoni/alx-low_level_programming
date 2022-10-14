#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program to perform simple operations
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: exists 0 normally, 98 on argc error, 99 on illegal operator
 */

int main(int argc, char *argv[])
{
	int (*func)(int, int);

	if (argc != 4)
	{
		print("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);
	if (func == NULL)
		{
	print("Error\n");
	exit(99)'
		}

	print("%d\n", func(atoi(argv[1]), atoi(argv[3]));
	return (0);
}
