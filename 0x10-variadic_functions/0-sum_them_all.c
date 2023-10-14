#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all: This function returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 * Return 0 If n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, add = 0;

	va_start(ap, n);

	for (a = 0; a < n; a++)
		add += va_arg(ap, int);

	va_end(ap);

	return (add);
}
