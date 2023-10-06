#include "main.h"
#include <stdlib.h>

/**
 * str_concat: This function concatenates 2 strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concatenated strings of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int x, dx;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = dx = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[dx] != '\0')
		dx++;
	conct = malloc(sizeof(char) * (x + dx + 1));

	if (conct == NULL)
		return (NULL);
	x = dx = 0;
	while (s1[x] != '\0')
	{
		conct[x] = s1[x];
		x++;
	}

	while (s2[dx] != '\0')
	{
		conct[x] = s2[dx];
		x++, dx++;
	}
	conct[x] = '\0';
	return (conct);
}
