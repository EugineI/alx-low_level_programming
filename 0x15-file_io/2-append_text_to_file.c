#include"main.h"
#include<stddef.h>
#include<string.h>
/**
 * append_text_to_file - appends text to file
 * @filename: file name
 * @text_content: where to append
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t result;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		result = write(fd, text_content, strlen(text_content));
		if (result == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
