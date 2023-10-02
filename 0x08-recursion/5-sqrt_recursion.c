#include "main.h"

int main_sqrt_recursion(int n, int a);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * n is the number to calculate the square root of
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (main_sqrt_recursion(n, 0));
}

/**
 * main_sqrt_recursion - recurses to find the natural
 * square root of a number
 * n is the number to calculate the sqaure root of
 * a is the  iterator
 * Return: the resulting square root
 */
int main_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (main_sqrt_recursion(n, a + 1));
}
