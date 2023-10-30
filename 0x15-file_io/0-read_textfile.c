#include "main.h"

/**
 * read_textfile - Description
 * @filename: pointer
 * @letters: int
 * Description: File IO
 * Return: int
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, size_r, size_w;
	char *tmp;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	tmp = malloc(letters);
	if (tmp == NULL)
		return (0);

	size_r = read(fd, tmp, letters);
	if (size_r == -1)
	{
		free(tmp);
		close(fd);
		return (0);
	}

	size_w = write(STDOUT_FILENO, tmp, size_r);
	if (size_w == -1)
	{
		free(tmp);
		close(fd);
		return (0);
	}

	free(tmp);
	close(fd);

	return (size_r);
}
