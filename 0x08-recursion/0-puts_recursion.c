#include <main.h>

/*
 * _puts_recursion = This is a function that prints a string with new line.
 * @*s = string
 * Return = Always 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(++s);
	}
	putchar('\n');
}
