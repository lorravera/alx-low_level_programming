#include "main.h"

/**
 * _memcpy - The memory area pointed to by @src is copied into the area pointed
 * to by @dest, with @n bytes being the amount copied.
 * @dest: A pointer to the memory area.
 * @src: The source buffer.
 * @n: function copies
 *
 * Return: A pointer to the destination @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;
	char *destination = dest;
	const char *source = src;

	while (index < n)
	{
	*destination = *source;
	destination++;
	source++;
	index++;
		}
return (dest);
}


