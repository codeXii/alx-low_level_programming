#include <stdio.h>
/**
 * main - Entry point
 * 'prints base 16 numbers'
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;
	char c;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
