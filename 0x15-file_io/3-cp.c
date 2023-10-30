#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void _close(int fd);

/**
 * main - Entry point
 * @argc: int
 * @argv: pointers
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[1024];
	int _read, _write;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		_close(fd_from);
		exit(99);
	}

	_read = 1;
	while (_read)
	{
		_read = read(fd_from, buffer, 1024);
		if (_read < 0)
		{
			_close(fd_from);
			_close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		else if (_read == 0)
			break;

		_write = write(fd_to, buffer, _read);
		if (_write < 0)
		{
			_close(fd_from);
			_close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	_close(fd_from);
	_close(fd_to);

	return (0);
}

/**
 * _close - Description
 * @fd: int
 * Return: void
 */
void _close(int fd)
{
	int err = close(fd);

	if (err < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
