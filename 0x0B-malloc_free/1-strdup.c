#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate to new memory space location.
 * @str: Charater
 * Return: char
 */

char *_strdup(char *str)
{
	int len = 0, i;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}

	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	dup[len] = '\0';
	return (dup);
}
