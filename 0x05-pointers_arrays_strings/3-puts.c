#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: input string
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		} else
		{
			i = -1;
			_putchar('\n');
		}
	}
}

