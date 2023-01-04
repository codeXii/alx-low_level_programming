#include"main.h"
/**
 * _sqrt_recursion - outputs squareroot of n
 *
 * @n: value
 * Return: void
 */

int _sqrt_recursion(int n)
{

	if (n == 1)
	{
		return (1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-1);
	}
	n++;
		return (_sqrt_recursion(n));
}
