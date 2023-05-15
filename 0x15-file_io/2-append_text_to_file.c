#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - appends to file
 * code by ArchibaldTK
 * @filename: name of file
 * @text_content: content of text
 * Return: int value
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int tr, len = 0;
	long int wrote;

	if (filename == NULL)
		return (-1);
	tr = open(filename, O_RDWR | O_APPEND);
	if (tr == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		wrote = write(tr, text_content, len);
		if (wrote == -1)
			return (-1);
	}
	if (close(tr) == -1)
		return (-1);
	return (1);
}
