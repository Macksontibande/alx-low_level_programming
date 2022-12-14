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

	for (num = 0; num < 9; num++)
		for (numb = 1; numb < 10; numb++)
		{
			putchar(num + '0');
			putchar(numb + '0');
			putchar(',');
			putchar(' ');
		}
	return (0);
}
