#include <stdio.h>

/**
 * main - Program that prints all single digits
 *
 * Return: 0
 */
int main(void)
{
	int dig = 0;

	while (dig < 10)
	{
		putchar(48 + dig);
		dig++;
	}
	putchar('\n');
	return (0);
}
