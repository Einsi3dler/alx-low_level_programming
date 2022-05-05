#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates a given string and returns it's addrees.
 * @str: Given string to be duplicated
 * Return: pointer to a newly allocated space in memory
 */
 char *_strdup(char *str)
 {
	 int i;
	 int p;
	 
	 for(i = 0; str[i] = '\0'; i++)
	 {		 
	 }
	 i = i+1;
	 char *cr = malloc (i * sizeof(char));
	 if (cr == NULL)
	 {
		Return (NULL); 
	 }
	 else
	 {
		 for (p = 0; p <= i; p++)
		 {
			 str[p] = cr[p];
		 }
		 return (cr);
	 }
 }
 