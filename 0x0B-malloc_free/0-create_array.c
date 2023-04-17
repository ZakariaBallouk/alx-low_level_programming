#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array.
 * @size: size of array Unsigned int.
 * @c: Character.
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *lent;

	lent = malloc(size * sizeof(char));
	if (size == 0 || lent == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		lent[i] = c;
	}
	return (lent);
}
