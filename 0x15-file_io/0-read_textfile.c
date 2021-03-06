#include "main.h"

/**
 *read_textfile - reads the content of a text file
 *@filename: the name of the file to be opened
 *@letters: amount of characters in the text file
 *Return: returns the count of letters of printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	ssize_t n, p;
	char *buff;

	if (!filename)
	{
		return (0);
	}
	x = open(filename, O_RDONLY);

	if (x == -1)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * (letters));
	if (!buff)
	{
		return (0);
	}
	n = read(x, buff, letters);
	p = write(STDOUT_FILENO, buff, n);

	close(x);

	free(buff);

	return (p);
}
