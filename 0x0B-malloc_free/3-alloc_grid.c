#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a grid of size width x height
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **alx;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	alx = malloc(sizeof(int *) * height);

	if (alx == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		alx[a] = malloc(sizeof(int) * width);

		if (alx[a] == NULL)
		{
			for (; a >= 0; a--)
				free(alx[a]);

			free(alx);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			alx[a][b] = 0;
	}

	return (alx);
}
