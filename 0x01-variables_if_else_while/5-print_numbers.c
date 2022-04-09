#include <stdio.h>
/* more headers goes there*/
/*betty style doc for function main goes there*/
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = '1';

	for (ch = '0'; ch <= '9'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}
