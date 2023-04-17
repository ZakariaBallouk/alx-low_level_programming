#include "main.h"
/**
 * _strlen_recursion - Function that returns the length of a string.
 * @s: Lenght of the String.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	int lenstr = 0;

	if (*s)
	{
		lenstr++;
		lenstr += _strlen_recursion(s + 1);
	}

	return (lenstr);
}
