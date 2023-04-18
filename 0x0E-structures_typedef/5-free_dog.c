#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocted for a struct dog
 * @d: struct dog to free
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
