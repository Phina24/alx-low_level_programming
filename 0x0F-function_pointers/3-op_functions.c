#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add: This function claculates the sum of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub: This function claculates the difference of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul: This function multiplies two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div: This function divides two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The quotient of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - This function returns the remainder of the division of two nums
 * @a: The first number.
 * @b: The second number.
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
