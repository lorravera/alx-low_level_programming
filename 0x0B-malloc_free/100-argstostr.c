#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: arguments
 * Return: a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int x;
	int y;
	char *a = NULL;
	int z;
	int xyz;

	z = 0;
	xyz = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			ext++;
		}
	}

	a = (char *)malloc(ext + ac + 1 * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			a[z] = av[x][y];
			a++;
		}
		a[z] = '\n';
		z++;
	}
	a[z] = '\0';
	return (a);
}
