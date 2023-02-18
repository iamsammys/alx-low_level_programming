#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc: arguement count
 * @argv: argument value, a strings that come after calling function
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = argc - argc;

	printf("%s\n", argv[i]);
	return (0);
}
