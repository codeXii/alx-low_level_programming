#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int numb = 0;
	int min = 1;
	int j = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			j = 1;
			numb = (numb * 10) + (s[c] - '0');
			c++;
		}

		if (j == 1)
		{
			break;
		}

		c++;
	}

	numb *= min;
	return (numb);
}
