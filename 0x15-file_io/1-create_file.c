#include "main.h"

/**
 * create_file - Create new file
 *
 * @filename: filename.
 * @text_content: File content.
 *
 * Return: Always 1 (success). -1 on error.
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int letter_count;
	int byte_writtem;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letter_count = 0; text_content[letter_count]; letter_count++)
		;

	byte_writtem = write(file, text_content, letter_count);

	if (byte_writtem == -1)
		return (-1);

	close(file);

	return (1);
}