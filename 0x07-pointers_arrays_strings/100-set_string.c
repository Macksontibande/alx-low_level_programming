#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char
 * @s: is a pointer
 * @to: is a char
 * Return 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
