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

	for (d = '0'; d <= '9'; d++)
		putchar(d);
		putchar('\n');
	return (0);
}
