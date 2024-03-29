#include <stdlib.h>
#include "main.h"

/**
 * *array_range: This function creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored as well as number of elements
 * Return: The pointer to the newly created array
 * Reeturn NULL if malloc fails and min > max
 */

int *array_range(int min, int max)
{
	int *p;
	int a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		p[a] = min++;

	return (p);
}
