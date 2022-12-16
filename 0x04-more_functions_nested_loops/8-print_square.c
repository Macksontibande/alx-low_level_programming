#include "main.h"

/**
 * print_square - print hashes squares
 * @size: size of the square
 *
 * Return: no return
 */
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		if (i != size - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
