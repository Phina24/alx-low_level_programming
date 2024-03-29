#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked: This function allocates memory using malloc
 * @b: number of bytes to be allocated
 * Return: a pointer to the allocated memory
 * Returns 98 if malloc fails
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
