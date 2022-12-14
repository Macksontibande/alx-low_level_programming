#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet 10 times in lowercase
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char alp;
	int num = 0;

	while (num++ <= 9)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);
		_putchar('\n');
	}
}
