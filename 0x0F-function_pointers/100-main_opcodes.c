#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 *
 * @argc: Arguments number
 * @argv: Arguments array
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int byts, i;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byts = atoi(argv[1]);

	if (byts < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (i = 0; i < byts; i++)
	{
		if (i == byts - 1)
		{
			printf("%02hhx\n", ar[i]);
			break;
		}
		printf("%02hhx ", ar[i]);
	}
	return (0);
}
