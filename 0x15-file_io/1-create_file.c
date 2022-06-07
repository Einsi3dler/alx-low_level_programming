#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int a;
	int let_count;
	int perm;

	if (!filename)
		return (-1);

	a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (a == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (let_count = 0; text_content[let_count]; let_count++)
		;

	perm = write(a, text_content, nletters);

	if (perm == -1)
		return (-1);

	close(a);

	return (1);
}
