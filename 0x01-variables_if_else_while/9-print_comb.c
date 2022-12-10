#include <stdio.h>
/**
 * main - Entry point
 * 'prints all possible combinations of single digits'
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
