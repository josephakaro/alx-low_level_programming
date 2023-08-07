#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: filename to append text.
 * @text_content: Content to be added.
 *
 * Return: Always 1 (success), -1 on error || doesn't exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, letter_count, byte_written;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (letter_count = 0; text_content[letter_count]; letter_count++)
			;

		byte_written = write(file, text_content, letter_count);

		if (byte_written == -1)
			return (-1);
	}

	close(file);

	return (1);
}
