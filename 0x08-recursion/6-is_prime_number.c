#include "main.h"

int actual_prime(int n, int a);

/**
 * is_prime_number - to return 1 if integer is a prime number or 0 otherwise
 * @n: number to used
 *
 * Return: 1 if n is a prime number, 0 if otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @a: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (actual_prime(n, a - 1));
}
