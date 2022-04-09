#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
/* your code goes here */
	if (last == 0)
	{
	printf("Last digit of %i is %i and is 0\n", n, last);
	}
	else if (n > 5)
	{
	printf("Last digit of %i is %i and is greater than 5\n", n, last);
	}
	else if ((last < 6) & (last != 0))
	{
	printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
