#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - sums the number in the arguments ,  followed by a new line.
 *@argc: number of arguments in the command line
 *@argv: array that contains the arguments in the command line
 *Return: Return returns 0
 *
 */

int main(int argc, char *argv[])
{
	int j, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (j = 1; j < argc; j++)
	{
		if (isdigit(argv[j]) != 0))
		{
			printf ("Error\n")
			return (1);
			break
		}
		sum = sum + atoi(argv[j]);
	}
	printf("%d\n", sum);
	return (0);
}
