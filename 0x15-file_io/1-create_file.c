#include<string.h>
#include<sys/stat.h>
#include<errno.h>
#include"main.h"
/**
 * create_file - creates a file
 * @filename: the file to be created
 * @text_content: null terminated string
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t len, written;
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		written = write(fd, text_content, len);
		if (written != len)
		{
			close(fd);
			return (-1);
		}
	}
	if (close(fd) == -1)
	{
		return (-1);
	}
	return (1);
}
