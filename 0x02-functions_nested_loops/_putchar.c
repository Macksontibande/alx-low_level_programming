#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the charecter c
 *
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
