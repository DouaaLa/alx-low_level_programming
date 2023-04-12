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
	int i, j;

	int **T = (int **)malloc(sizeof(int) * height);
	if (width <= 0 || height <= 0 || T == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		T[i] = (int *)malloc(sizeof(int) * width);
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
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			T[i][j] = 0;

	return (T);
}
