#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to be evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, d, b;

	flag = 0;
	b = 0;

	for (d = 0; s[d] != '\0'; d++)
	{
		if (s[d] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			b++;
		}
	}

	return (b);
}
/**
 * **strtow - divides a string into words
 * @str: string to be split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int x, y = 0, len = 0, words, d = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));

		if (matrix == NULL)
			return (NULL);

	for (x = 0; x <= len; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (d)
			{
				end = x;
				tmp = (char *)malloc(sizeof(char) * (d + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start];
				*tmp = '\0';
				matrix[y] = tmp - d;
				y++;
				d = 0;
			}
		}
		else if (d++ == 0)
			start = x;
	}

	matrix[y] = NULL;

	return (matrix);
}
