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
	int ch = 'a';

	while(ch <= 'z' )
	{
		if (ch == 'e' || ch == 'q')
		{
			ch++;
		}
		else
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
