#include <stdio.h>

/**
 * main - Entry point
 * a program that prints lower case alphabets and upper case alphabets
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;
	char C;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (C = 'A'; C <= 'Z'; C++)
		putchar(C);
	putchar('\n');
	return (0);
}
