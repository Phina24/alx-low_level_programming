#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: is the starting address of memory address
 * @b: is the constant byte
 * @n: number of bytes to be changed
 *
 * Return: changed array with value b for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
