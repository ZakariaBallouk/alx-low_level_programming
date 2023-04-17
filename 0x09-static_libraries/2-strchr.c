#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: input pointer to put the const
 * @c: input const
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
