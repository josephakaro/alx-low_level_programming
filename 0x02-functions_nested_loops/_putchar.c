#include "main.h"
#include <unistd.h>

/**
 * _putchar - Wrties the charaters C to stdout
 *
 * @c: The charater to print
 *
 * Return: Always 0 (success)
 *
 * error: Always -1 (failure)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
