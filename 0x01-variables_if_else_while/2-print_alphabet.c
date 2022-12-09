#include <stdio.h>
/**
 * main - Entry point
 * a program that prints alphabets
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
