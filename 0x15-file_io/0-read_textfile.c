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
    if (filename == NULL)
        return (0);

    FILE *check = fopen(filename, "r");
    if (check == NULL)
        return (0);
    
    char buffer[letters];
    size_t read = fread(buffer, sizeof(char), letters, check);
    if (read == 0)
    {
        return (0);
    }

    fwrite(buffer, sizeof(char), read, stdout);

    fclose(check);

    return (read);
}