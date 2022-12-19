#include <stdio.h>

/**
 * main - Program to print possible combinations of two digits
 *
 * Return: 0
 */
int main(void)
{
	int num;
	int numb;

	for (num = 0; num < 10; num++)
		for (numb = 0; numb < 10; numb++)
		{
			if (num - numb < 0)
			{
				putchar(num + '0');
				putchar(numb + '0');
				if (num + numb < 17)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	return (0);
}
