#include "main.h"
/**
 * print_sign - main entry point
 * @n: 'value to be checked for'
 * Return: 0 or 1 success
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
