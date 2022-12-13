#include "main.h"

/**
 * main - Entry point
 * 'prints lowercase alphabets'
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
