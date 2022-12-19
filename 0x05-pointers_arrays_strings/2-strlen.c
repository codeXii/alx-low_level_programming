#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: input string
 * Return: lenght of a string
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*(s + lenght))
		lenght++;
	return (lenght);
}
