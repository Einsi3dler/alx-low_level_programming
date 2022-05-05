#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates the string and return the pointer address.
 * @str: string to be copied.
 *Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	 char *cr;
	 unsigned int i, p;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	cr = (char *)malloc((i + 1) * sizeof(char));

	if (cr == NULL)
	{
		return (NULL);
	}
	for (p = 0; p <= i; p++)
	{
		cr[p] = str[p];
	}
	return (cr);
}
