#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates a 2 dimensional array of integers
 * @width: width of the 2 dimensional array
 * @height: height of the 2 dimensional array
 *
 * Return: pointer to the newly allocated 2 dimensional array
 */
		
int **alloc_grid(int width, int height)
{
	int **l;
	int x, y;
		
	if (width <= 0 || height <= 0)

		return (NULL);
	
	l = malloc(sizeof(int *) * height);
		
	if (l == NULL)
		
		return (NULL);
	
	for (x = 0; x < height; x++)
		
	{
		
		l[x] = malloc(sizeof(int) * width);
		
		if (l[x] == NULL)
		
		{
		
			for (; x >= 0; x--)
		
				free(l[x]);
		
		free(l);
		
			return (NULL);
		
		}
		
	}
		
		for (x = 0; x < height; x++)
		
	{
		
		for (y = 0; y < width; y++)
		
			l[x][y] = 0;
		
	}
		

		
	return (l);
		
}

