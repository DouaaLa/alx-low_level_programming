#include "main.h"

/**
 * alloc_grid - point to a 2 dimensional array
 * @width: integer
 * @height: integer
 * Return: pointer
 * On error, it returned NULL
 */
int **alloc_grid(int width, int height)
{
	int **T, i, j;

	if (width <= 0 || height <= 0 || T == NULL)
	{
		return (NULL);
	}
	T = malloc(sizeof(int) * height);
	if (T == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		T[i] = malloc(width * sizeof(int));

		if (T[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(T[j]);
			}
			free(T);
			return (NULL);
		}
	}

	return (T);
}
