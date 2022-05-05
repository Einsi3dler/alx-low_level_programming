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
	i = i + 1;
	cr = (char *)malloc(i * sizeof(char));
	
	if (cr == NULL)
	 {
		 return (NULL);
	 }
	for (p = 0; p <= i; p++)
	 {
		 str[p] = cr[p];
	 }
	return (cr);
 }
