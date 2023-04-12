#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Entry point
 * @size: size of the array
 * @c: character
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{

	if (size == 0)

	{

	return (NULL);

	}
	char *array = malloc(size * sizeof(char));

	if (array == NULL)

		{
		return (NULL);
		}
			for (unsigned int i = 0; i < size; i++)

			{
				*(array + i) = c;
			}
	return (array);
}

