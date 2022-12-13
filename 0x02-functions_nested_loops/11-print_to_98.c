#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function to print numbers from n to 98
 * @n: value of starting point of integer
 * Return: nothing
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
			printf("%d, ", n);
	}
}
