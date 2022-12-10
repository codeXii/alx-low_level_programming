#include <stdio.h>
/**
 * main- Entry point
 * prints all possible combination of two digits
 * Return: Always returns 0 (success)
 */

int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);
				if (a != 56 || b != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10); /* this is an ascii code for new line */
	return (0);
}
