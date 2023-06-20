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
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
