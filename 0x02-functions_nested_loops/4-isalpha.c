#include "main.h"

/**
 * _islower - selecting lower cases
 *@c: contain value to be compared
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if (((c >= 'a') & (c <= 'z'))|((c >= 'A') & (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
