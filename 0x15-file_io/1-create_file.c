#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * create_file - function that creates a file
 * code by ArchibaldTK
 * @filename: filename to grab
 * @text_content: content to add
 * Return: int value
 */
int create_file(const char *filename, char *text_content)
{
	int fh, len = 0;
	long int wrote;

	if (filename == NULL)
		return (-1);
	fh = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fh == -1)
		return (-1);
	if (text_content != NULL)
	{

		while (text_content[len])
			len++;
		wrote = write(fh, text_content, len);
		if (wrote == -1)
			return (-1);
	}
	if (close(fh) == -1)
		return (-1);
	return (1);
}
