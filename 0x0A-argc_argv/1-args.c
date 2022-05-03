#include <stdio.h>

/**
 *main - prints its number of arguments, followed by a new line.
 *@argc: number of arguments in the command line
 *@argv: array that contains the arguments in the command line
 *Return: Return returns 0
 *
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
