#include "mai.h"

/**
 * _strchr - locates a charecter in a string
 * @s: the string we are investigating
 * @c: the charecter to locate
 * Return: c or null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
