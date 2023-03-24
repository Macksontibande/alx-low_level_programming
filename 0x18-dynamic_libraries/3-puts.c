#include "main.h"

/**
 * _puts - prints a string
 * @str: a pointer to an int that will be changed
 * Return: void which means our answer is correct
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
