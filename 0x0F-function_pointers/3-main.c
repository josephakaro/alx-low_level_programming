#include "3-calc.h"

/**
 * main - Program that perfroms simple operations
 *
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int input_1, input_2, result;
	char op;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	input_1 = atoi(argv[1]);
	input_2 = atoi(argv[3]);

	calc = get_op_func(argv[2]);

	if (!calc)
	{
		printf("Error\n");
		exit(99);
	}

	op = *argv[2];

	if ((op == '/' || op == '%') && input_2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = calc(input_1, input_2);

	printf("%d\n", result);

	return (0);
}
