#include "main.h"
/**
 * _memset - fills memory with a specific byte.
 * @s: to put the byte in starting adress of memory.
 * @b: specific value.
 * @n: number of bytes to be used.
 * Return: pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
