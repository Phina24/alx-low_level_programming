#include <stdlib.h>
#include "main.h"

/**
 * *_memset: This function fills the memory with a constant byte
 * @a: memory area to be filled
 * @b: the char to copy
 * @n: number of times to copy b
 * Return: pointer to the memory area a
 */

char *_memset(char *a, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		a[i] = b;
	}

	return (a);
}

/**
 * *_calloc: This function allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Returns a pointer to allocated memory
 * Returns NULL if fails and if nmeb/size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}
