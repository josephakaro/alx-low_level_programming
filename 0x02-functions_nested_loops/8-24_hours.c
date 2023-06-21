#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (success)
 */
void jack_bauer(void)
{
	int i, t;

	i = 0;

	for (i = 0; i < 24; i++)
	{
		t = 0;
		while (t < 60)
		{
			int k = i / 10;
			int l = i % 10;
			int o = t / 10;
			int f = t % 10;

			_putchar(k + '0');
			_putchar(l + '0');
			_putchar(':');
			_putchar(o + '0');
			_putchar(f + '0');
			_putchar('\n');
			t++;
		}
	}
}
