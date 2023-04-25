#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX STDOUT
 * code by ArchibaldTK
 * @filename: path to file
 * @letters: chars to read
 * Return: chars read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int hf;
	char *buff;
	ssize_t bytes, r;

	if (!filename)
		return (0);
	hf = open(filename, O_RDONLY);
	if (hf == -1)
	{
		close(hf);
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		close(hf);
		return (0);
	}

	bytes = read(hf, buff, letters);

	if (bytes == -1)
	{
		close(hf);
		free(buff);
		return (0);
	}

	r = write(STDOUT_FILENO, buff, bytes);

	if (r == -1)
	{
		close(hf);
		free(buff);
		return (0);
	}
	close(hf);
	return (bytes);
}
