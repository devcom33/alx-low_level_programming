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
	unsigned int i, j;
	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(sizeof(int) * (width * height));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
