#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function to print name
 *
 * @name: Pointer name to print out.
 * @f: A pointer function takes a pointer to character as input then print.
 *
 */

void print_name(char *name, void (*f)(char *)) 
{
	if ( !name || !f)
	{
		return;
	}
	else
	{
		f(name);
	}
}
