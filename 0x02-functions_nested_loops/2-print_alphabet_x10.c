#include "main.h"

/**
 * print_alphabet_x10 : it will print the alphabet 10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int ch;
	int num;
	while (num < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar (ch);
		}
		_putchar('\n');
		num++;
	}
}
