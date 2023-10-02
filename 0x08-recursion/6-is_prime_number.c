#include "main.h"

int main_prime(int n, int a);

/**
 * is_prime_number: This shows if an integer is a prime number or not
 * @n: number to be evaluated
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (main_prime(n, n - 1));
}

/**
 * main_prime: This calculates if a number is prime recursively
 * @n: number to be evaluated
 * @a: iterator
 * Return: 1 if n is prime, 0 if not
 */
int main_prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (actual_prime(n, a - 1));
}

