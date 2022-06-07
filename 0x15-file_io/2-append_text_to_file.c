#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	int let_count;
	int perm;

	if (!filename)
	{
		return (-1);
	}

	a = open(filename, O_WRONLY | O_APPEND);

	if (a == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		for (let_count = 0; text_content[let_count]; let_count++)
		{
		}

		perm = write(a, text_content, let_count);

		if (perm == -1)
		{
			return (-1);
		}
	}

	close(a);

	return (1);
}
