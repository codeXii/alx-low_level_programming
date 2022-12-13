#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function to print numbers from n to 98
 * @n: value of starting point of integer
 * Return: nothing
 */

void print_to_98(int n)
{
	for (n = n; n < 99; n++)
		printf("%d, ", n);
}
