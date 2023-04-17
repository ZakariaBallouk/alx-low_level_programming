#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @r: integer number.
 *
 * Return: factorial of r.
 */
int factorial(int r)
{
	if (r < 0)
		return (-1);
	if (r == 0)
		return (1);
	return (r * factorial(r - 1));
}
