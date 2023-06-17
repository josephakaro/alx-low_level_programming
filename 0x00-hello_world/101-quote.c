#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Writes a quotes into the console
 *
 * Return: Always 1 (success)
 */
int main(void)
{
	char qt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, qt, sizeof(qt));
	return (1);
}
