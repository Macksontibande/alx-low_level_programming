#include "main.h"

/**
 * _putchar - writes the charector c to stdout
 * @c: the charecter to print
 * Return: on success 1
 * On error, -1 and error is there returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
