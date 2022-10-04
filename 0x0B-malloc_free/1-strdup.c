#include "main.h"
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory whih contains a copy of the string
 * given as a parameter.
 * @str: string to be copied.
 * Return: NULL if str == NULL if insufficient memory is available
 * otherwise, apointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];

	duplicate[len] = '\0';

	return (duplicate);
}
