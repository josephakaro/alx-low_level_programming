#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - finds the largest integer
 *
 * @usrn: username
 * @len: length of username
 *
 * Return: the largest number
 */
int f4(char *usrn, int len)
{
	int chr;
	int vchr;
	unsigned int rand_num;

	chr = *usrn;
	vchr = 0;

	while (vchr < len)
	{
		if (chr < usrn[vchr])
			chr = usrn[vchr];
		vchr += 1;
	}

	srand(chr ^ 14);
	rand_num = rand();

	return (rand_num & 63);
}

/**
 * f5 - multiplies each character of username
 *
 * @usrn: username
 * @len: length of username
 *
 * Return: multiplied character
 */
int f5(char *usrn, int len)
{
	int chr;
	int vchr;

	chr = vchr = 0;

	while (vchr < len)
	{
		chr = chr + usrn[vchr] * usrn[vchr];
		vchr += 1;
	}

	return (((unsigned int)chr ^ 239) & 63);
}

/**
 * f6 - generates a random characters
 *
 * @usrn: username
 *
 * Return: a random characters
 */
int f6(char *usrn)
{
	int chr;
	int vchr;

	chr = vchr = 0;

	while (vchr < *usrn)
	{
		chr = rand();
		vchr += 1;
	}

	return (((unsigned int)chr ^ 229) & 63);
}

/**
 * main - Entry point
 *
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int len, chr, vchr;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;
	/* ----------- f1 ----------- */
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];
	/* ----------- f2 ----------- */
	chr = vchr = 0;
	while (vchr < len)
	{
		chr = chr + argv[1][vchr];
		vchr = vchr + 1;
	}
	keygen[1] = ((char *)alph)[(chr ^ 79) & 63];
	/* ----------- f3 ----------- */
	chr = 1;
	vchr = 0;
	while (vchr < len)
	{
		chr = argv[1][vchr] * chr;
		vchr = vchr + 1;
	}
	keygen[2] = ((char *)alph)[(chr ^ 85) & 63];
	/* ----------- f4 ----------- */
	keygen[3] = ((char *)alph)[f4(argv[1], len)];
	/* ----------- f5 ----------- */
	keygen[4] = ((char *)alph)[f5(argv[1], len)];
	/* ----------- f6 ----------- */
	keygen[5] = ((char *)alph)[f6(argv[1])];
	keygen[6] = '\0';
	for (chr = 0; keygen[chr]; chr++)
		printf("%c", keygen[chr]);
	return (0);
}
