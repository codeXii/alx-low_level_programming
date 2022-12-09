#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * 'prints single digit in base 10 from 0
 * Return: Always 0 (success)
 */

int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
		putchar(d + '0');
	putchar('\n');
	return (0);
}
