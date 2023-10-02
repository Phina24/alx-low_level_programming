#include <main.h>

/*
 * int _strlen_recursion = This function prints a string with new line.
 * @*s = string
 * @n = length of string
 * Return = Always 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
