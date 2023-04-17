#include "main.h"

int number_prime(int n, int i);

/**
 * is_prime_number - Says if an integer is.
 * a prime number.
 * @n: number.
 * Return: 1 if n is a prime number, else 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (number_prime(n, 2));
}

/**
 * number_prime - Calculates if a number is.
 * prime recursively.
 * @n: number.
 * @i: iteration number.
 * Return: 1 if n is prime, else 0.
 */
int number_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (number_prime(n, i - 1));
}
