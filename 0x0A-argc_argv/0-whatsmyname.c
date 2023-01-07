#include <stdio.h>

/**
 * main - prints file name
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
