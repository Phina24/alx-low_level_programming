#include "main.h"

/*
 * factorial = This function returns the factorial of a given number
 * n = given number which returns -1 if it is lower than 0 to show an error
 * if n = 0 then its factorial is 1
 * Return = Always 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
