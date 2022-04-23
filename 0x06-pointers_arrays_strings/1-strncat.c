#include "main.h"

/**
 *_strcat - concatinate 2 strings.
 *@dest: first string.
 *@src: second string.
 *Return: string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
		if (j == n)
		{
			break;
		}
	}

	dest[i] = '\0';

	return (dest);
}
