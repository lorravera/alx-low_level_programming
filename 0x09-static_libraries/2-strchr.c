#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located
 *
 * It takes two parameters:'s' is the string to search in,
 * and 'c' is the character to locate.
 *
 * Return:If 'c' is found within 's', this
 * function returns a pointer to the first occurrence of 'c'.
 * If 'c' is not found within 's', this function returns NULL.
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
