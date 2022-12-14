#include "main.h"

/**
 * _islower - Program to check lowercase
 * @c: is the charecter to be checked
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
