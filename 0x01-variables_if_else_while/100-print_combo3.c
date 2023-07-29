#include <stdio.h>

/**
* main - loop through variables i and j printing dcombinations
*
* description: prints all possible different combinations of two digits
*
* Return: printed possible different combinations of two digits
**/

int main(void)
{
    int i = '0';
    int j;

    while (i <= '9')
    {
        j = i + 1;

        for (;j <= '9'; j++)
        {
            putchar(i);
            putchar(j);

            if (i == '8' && j == '9')
            {
                putchar('\n');
            }
            else
            {
                putchar(',');
                putchar(' ');
            }
        }
        i++;
    }
    return (0);
}
