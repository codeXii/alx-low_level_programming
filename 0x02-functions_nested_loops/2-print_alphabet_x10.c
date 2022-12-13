#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * 'prints the lower case alphabets 10x'
 * Return: 0 (success)
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
	_putchar('\n');
	}
}
