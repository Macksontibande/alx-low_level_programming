#include "main.h"

/**
 * _strlen_recursion - return length of string
 * @s: string to be measured
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	return (*s ? (1 + _strlen_recursion(++s)) : 0);
}
