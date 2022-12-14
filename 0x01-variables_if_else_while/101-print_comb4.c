#include <stdio.h>

/**
 * main - Program that prints possible different combinations of 3 digit
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 9; j++)
		{
			for (k = 2; k < 8; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
}
				
