#include <stdio.h>

/**
 * main - Program that prints lowercase alphabets in reverse
 *
 * Return: 0
 */
int main(void)
{
	char alp = 'z';

	while (alp >= 'a')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
