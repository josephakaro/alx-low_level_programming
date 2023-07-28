#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before the main
 * function is executed
 */
void first(void)
{
	static char *str = "You're beat! and yet, you must allow,\n";
	static char *str1 = "I bore my house upon my back!\n";

	printf("%s %s", str, str1);
}
