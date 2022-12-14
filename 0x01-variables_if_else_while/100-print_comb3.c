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

	for (num = 0; num <= 9; num++)
		for (numb = 1; numb <= 8; numb++)
		{
			putchar(num);
			putchar(numb);
			putchar(',');
			putchar(' ');
		}
	return (0);
}
