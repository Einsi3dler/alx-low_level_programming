#include <stdio.h>

/**
 *main - prints the arguments followed by a new line.
 *@argc: number of arguments in the command line
 *@argv: array that contains the arguments in the command line
 *Return: Return returns 0
 *
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
