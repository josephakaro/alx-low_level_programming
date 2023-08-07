#include "main.h"

/**
 * checkfile - checks for readability of a file.
 *
 * @file_dir: File location.
 * @file_dest: File destination.
 * @argv: Number of arrary argument.
 *
 * Return: Void.
 */

void checkfile(int file_dir, int file_dest, char *argv[])
{
	if (file_dir == -1)
	{
		dprintf(STDERR_FILENO, "Error: file %s is not readable\n", argv[1]);
		exit(98);
	}
	if (file_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: file %s is not writable", argv[2]);
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
	int file_dir, file_dest;
	int end_error;
	char buffer[1024];

	ssize_t count, byte_written;

	if (argc != 3)
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_directory file_destination");
		exit(97);

	file_dir = open(argv[1], O_RDONLY);
	file_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	checkfile(file_dir, file_dest, argv);

	count = 1024;

	switch (count)
	{
		count = read(file_dir, buffer, 1024);

		case count == -1:
			checkfile(-1, 0, argv);
		byte_written = write(file_dir, buffer, count);

		case byte_written == -1:
			checkfile(0, -1, argv);

	}


	end_error = close(file_dest);
	if (end_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: File %d can't be closed\n");
		exit(100);
	}

	return (0);

}
