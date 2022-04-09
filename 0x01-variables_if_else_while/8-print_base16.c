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
	int ch;
	int CH;

	for (ch = '0'; ch <= '9'; ch++)
	putchar(ch);
	for (CH = 'a'; CH <= 'f'; CH++)
	putchar(CH);
	putchar('\n');
	return (0);
}
