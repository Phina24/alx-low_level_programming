#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator: Prints each array element with a fnctn given as a paramtr
 * @array: array
 * @size: sixe of array to be printed
 * @action: pointer to function to print in regular or hex
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (array == NULL || action == NULL)
		return;

	for (n = 0; n < size; n++)
	{
		action(array[n]);
	}
}
