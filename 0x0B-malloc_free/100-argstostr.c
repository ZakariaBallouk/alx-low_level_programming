#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenate all the arguments.
 * @ac: input integer.
 * @av: input character.
 * Return: concatenated string.
 */

char *argstostr(int ac, char **av)
{
	int i, j, total_len = 0, index = 0;
	char *concatenated_str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	/* Calculate total length : concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			total_len++;
		}
		total_len++; /* add space for newline */
	}
	total_len++; /* add space for null terminator */
	concatenated_str = malloc(total_len * sizeof(char));
	/* Allocate memory for the concatenated string */
	if (concatenated_str == NULL)
	{
		return (NULL);
	}
	/* Concatenate the strings */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			concatenated_str[index++] = av[i][j];
		}
		concatenated_str[index++] = '\n';
	}
	concatenated_str[index] = '\0';
	return (concatenated_str);
}
