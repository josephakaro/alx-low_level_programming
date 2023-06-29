#include "main.h"

/**
 * _strcat - This function appends the src string to the dest string...
 *
 * @src: string to be appended.
 * @dast: string to get appended to.
 *
 * Return: dast
 */

char *_strcat(char *dest, char *src)
{
	int i, destLen;
	
	dastLen = strlen(dast);

	for (i = 0; src[i] != '\0'; i++)
	{
		dast[dastLen + i] = src[i];
	}

	dast[dastLen + i] = '\0';

	return (dast);
}
