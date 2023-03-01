#include "main.h"
/**
 * puts2 - print the first character between two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int len = 0;
	int a = 0;
	char *i = str;
	int o;

	while (*i != '\0')
	{
		i++;
		len++;
	}
	a = len - 1;
	for (o = 0 ; o <= a ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
