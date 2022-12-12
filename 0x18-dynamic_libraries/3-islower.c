#include "main.h"

/**
 * _islower - selecting lower cases
 *@c: contain value to be compared
 * Return: Always 0.
 */

int _islower(int c)
{
	int one = 1;
	int zero = 0;

	if ((c >= 97) & (c <= 122))
	{
		return (one);
	}
	else
	{
		return (zero);
	}
}
