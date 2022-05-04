#include <stdio.h>
#include <stdlib.h>

/**
 *main - sums the number in the arguments ,  followed by a new line.
 *@argc: number of arguments in the command line
 *@argv: array that contains the arguments in the command line
 *Return: Return returns 0
 *
 */

int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		sum = sum * atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
