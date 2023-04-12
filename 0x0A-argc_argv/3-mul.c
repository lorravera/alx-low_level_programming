#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int main(int argc, char *argv[])
{
    /*Check that the program was given two arguments*/
if (argc != 3)
{
 	printf("Error\n");
	return 1;
}

    /*Convert the two arguments to integers*/
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    /*Multiply the two numbers*/
    int result = num1 * num2;

    /*Print the result followed by a new line*/
    printf("%d\n", result);

    return 0;
}

