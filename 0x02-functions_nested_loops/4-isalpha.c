#include "main.h"

/**
 * _isalpha - Check for alphabet charector
 * @c: Is the charector
 * Return: 0
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
