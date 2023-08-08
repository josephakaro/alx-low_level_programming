#include "main.h"

/**
 * checkfile - checks for readability of a file.
 *
 * @file_from: File location.
 * @file_to: File destination.
 * @argv: Number of arrary argument.
 *
 * Return: Void.
 */
void checkfile(int file_from, int file_to, char *argv[])
{
		if (file_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		if (file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}

}
/**
 * main - File Checker.
 *
 * @argc: list of argument.
 * @argv: Array of arguments.
 *
 * Return: Always 0 (success).
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	int end_error;
	char buffer[1024];

	ssize_t count, byte_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	checkfile(file_from, file_to, argv);

	count = 1024;

	while (count)
	{
		count = read(file_from, buffer, 1024);
		if (count == -1)
			checkfile(-1, 0, argv);
		byte_written = write(file_to, buffer, count);

		if (byte_written == -1)
			checkfile(0, -1, argv);
	}
	end_error = close(file_from);
	if (end_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_from);
		exit(100);
	}
	end_error = close(file_to);
	if (end_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't be close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
