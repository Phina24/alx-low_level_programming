#include "main.h"
/**
 * main - entry point
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int n;
	char i;

	n = 0;

	while (n < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		n++;
		_putchar ('\n');
	}
}
