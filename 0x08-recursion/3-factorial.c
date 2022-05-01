#include "main.h"

/*
*factorial  - factorial n
*@n: integer n
*Return : Yes
*/

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if  (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
