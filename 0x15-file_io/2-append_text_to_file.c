#include "main.h"

/**
 * append_text_to_file - Description
 * @filename: pointer
 * @text_content: pointer
 * Description: File IO
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, size_w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	while (text_content && text_content[len])
		len++;

	size_w = write(fd, text_content, len);
	close(fd);
	if (size_w < 0)
		return (-1);

	return (1);
}
