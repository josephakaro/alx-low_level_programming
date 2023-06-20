#include "main.h"

/**
 * _isalpha - Entry point
 *
 * Description: validates for all alphabets
 *
 * @c: search parameter
 *
 * Return: Always 0 (success)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
