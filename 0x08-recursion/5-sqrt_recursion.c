#include "main.h"

/**
 * _sqrt_recursion - function that return
 * the natural square root of a number
 * @n: natural number
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);

	else
	{
		return (_sqrt_recursion(1, n));
	}
}
