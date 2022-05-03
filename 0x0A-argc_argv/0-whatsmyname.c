#include <stdio.h>

/**
 *main - Entry point
 *
 * Return: Return returns 0
 *
 */

int main(int argc , char *argv[])
{
	int i;
	for(i = 0; i < argc; i++)
	{		
	printf("%s",argv[i]);
	}
	return (0);
}
