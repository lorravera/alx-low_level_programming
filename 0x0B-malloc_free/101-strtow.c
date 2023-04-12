#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - Locates the index marking the end of the
 * first word contained within a string.
 * @str: The string to be searched.
 *
 * Return: The index marking the end of the initial word pointed to by str.
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}

	return (len);
}

/**
 * count_words - Counts the number of words contained within a string.
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */
int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}

	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str = NULL, str = "", or the function fails - NULL.
 * Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **strings;
	int index = 0, words, a, letters, b;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (a = 0; a < words; a++)
	{
		while (str[index] == ' ')
			index++;

		letters = word_len(str + index);

		strings[a] = malloc(sizeof(char) * (letters + 1));

		if (strings[a] == NULL)
		{
			for (; a >= 0; a--)
				free(strings[a]);

			free(strings);
			return (NULL);
		}

		for (b = 0; b < letters; b++)
			strings[b][l] = str[index++];

		strings[b][l] = '\0';
	}
	strings[b] = NULL;

	return (strings);
}
