#include "variadic_functions.h"
#include <stdarg.h>


	/**
	 * sum_them_all - Function to return the sum of all its paramters.
	 * @n: The number of paramters passed into the function.
	 * @...: A variable number of paramters to calculate the sum of.
	 *
	 * Return: If n == 0 - 0.
	 *         Otherwise - the sum of all parameters.
	 */
	int sum_them_all(const unsigned int n, ...)
	{
		va_list a;
		unsigned int b, sum = 0;


		va_start(a, n);


		for (b = 0; b < n; b++)
			sum += va_arg(a, int);


		va_end(a);


		return (sum);
	}