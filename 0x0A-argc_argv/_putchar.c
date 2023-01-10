#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the charector to print
 * Return: 1 on success or -1 n error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
