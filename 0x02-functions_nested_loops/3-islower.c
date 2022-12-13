#include "main.h"

/**
 * _islower - main entry point
 * @c: 'searches for lower case characters'
 * Return: 0 or 1 success
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
