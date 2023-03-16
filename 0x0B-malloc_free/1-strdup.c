#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to the duplicated string
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *alx;
	int a, i = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	alx = malloc(sizeof(char) * (a + 1));

	if (alx == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		alx[i] = str[i];

	return (alx);
}

