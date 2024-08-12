#include "main.h"
/**
 * read_textfile - reads a text file and prints it
 * @filename: name of file
 * @letters: number of letters
 * Return: number of letters:
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t reads, written;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	if (letters == 0)
	{
		return (0);
	}
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	reads = read(fd, buffer, letters);
	if (reads < 1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	written = write(2, buffer, reads);
	if (written == -1 || written != reads)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (written);
}
