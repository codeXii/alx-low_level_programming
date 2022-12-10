#include <stdio.h>
/**
 * main - Entry point
 * 'prints the alphabets in reverse order
 * Return: Always return 0 (success)
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
