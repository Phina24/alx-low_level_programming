#include <main.h>

/*
 * _pow_recursion: This functn returns the value of x raised to the power of y
 * where x and y are the given integers
 * if y = 0 it returns 1, if y < 0 it returns -1 (error)
 * Return = Always 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}

	return (x * _pow_recursion(x, (y - 1)));
}
