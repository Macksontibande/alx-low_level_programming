#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
