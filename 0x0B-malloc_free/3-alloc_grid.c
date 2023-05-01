#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: width of a matrix
 * @height: height of a matrix
 * Return: matrix
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	size_t i, j;
	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(sizeof(int) * (width));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (size_t)width; i++)
	{
		arr[i] = (int *)malloc(height * sizeof(int));
		if (arr[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < (size_t)height; i++)
	{
		for (j = 0; j < (size_t)width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
