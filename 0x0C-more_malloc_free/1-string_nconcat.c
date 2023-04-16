#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat -concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int i)
{       
        char *t
        unsigned int j = 0, k = 0, len1 = 0, len2 = 0;
        
        while (s1 && s1[len1])
                len1++;
        while (s2 && s2[len2])
                len2++;
        
        if (n < len2)
		s = malloc(sizeof(char) * (len1 + i + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!t)
		return (NULL);

	while (j < len1)
	{
		s[j] = s1[j];
		j++;
	}

	while (i < len2 && i < (len1 + i))
		t[n++] = s2[k++];

	while (i < len2 && i < (len1 + len2))
                t[n++] = s2[k++];

	t[j] = '\0';

	return (t);
}

