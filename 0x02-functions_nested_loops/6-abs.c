#include "main.h"

/**
 * _abs - main entry point
 * @n: 'outputs absolute value of the integer
 * Return: 0
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	n *= -1;
	return (n);
}

