#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two string.
 * @s1: input character one to concat.
 * @s2: input character two to concat.
 * Return: Char
 */

char *str_concat(char *s1, char *s2)
{
	int len = 0, i, j = 0;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] || s2[i]; i++)
	{
		len++;
	}

	concat = malloc((len) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		concat[j++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		concat[j++] = s2[i];
	}
	return (concat);
}
