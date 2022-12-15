#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @n: is the int we to check
 * Return: 0
 */
int print_last_digit(int n)
{
	int last_n;

	last_n = n % 10;
	if (last_n < 0)
		last_n = last_n * -1;
	_putchar(last_n + '0');

	return (last_n);
