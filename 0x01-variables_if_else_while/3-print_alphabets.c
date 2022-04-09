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

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	for (CH = 'A'; CH <= 'Z'; CH++)
	putchar(CH);
	putchar('\n');
	return (0);
}
