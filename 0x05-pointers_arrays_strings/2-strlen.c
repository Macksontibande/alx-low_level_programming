#include "main.h"

/**
 * _strlen - length of a string
 * @s: a pointer to an int that will be updated
 * Return: 0
 */
int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}

	return (u);
}
