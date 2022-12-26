#include <stdio.h>

/**
 * main - prints combinations of two two-digits of numbers
 *
 * Return: 0
 */
int main(void)
{
	int num1;
	int num2;
	int num3;
	int num4;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			for (num3 = 0; num3 < 10; num3++)
			{
				for (num4 = 0; num4 < 10; num4++)
				{
					if (num1 <= num3 && num1 + num2 < num3 + num4)
					{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(' ');
					putchar(num3 + '0');
					putchar(num4 + '0');

					if (!(num1 == 9 && num2 == 8))
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
