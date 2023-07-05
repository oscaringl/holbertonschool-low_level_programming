#include "main.h"

#define BUF_SIZE 1024

/**
 * error_exit - Prints an error message and exits with the specified code.
 *
 * @code: The exit code.
 * @msg: The error message to print.
 */
void error_exit(int code, char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}

/**
 * cp_file - Copies the content of file_from to file_to.
 *
 * @file_from: The source file.
 * @file_to: The destination file.
 */
void cp_file(char *file_from, char *file_to)
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUF_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file");

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to file");

	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			error_exit(99, "Error: Can't write to file");
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file");

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close file descriptor");

	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close file descriptor");
}

/**
 * main - Entry point.
 *
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 on success, or the corresponding exit code on failure.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");

	cp_file(argv[1], argv[2]);

	return (0);
}
