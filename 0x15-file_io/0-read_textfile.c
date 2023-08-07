#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * 
 * @filename: Holds the given file name.
 * @letters: text inside the files.
 * 
 * Return: Number it could be read and printed.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
    int file;
	ssize_t byte_read, byte_written;
	char *buffer;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	byte_read = read(file, buffer, letters);
	byte_read = write(STDOUT_FILENO, buffer, byte_read);

	close(file);

	free(buffer);

	return (byte_written);
}
