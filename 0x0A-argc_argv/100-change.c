#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: arguments count
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int amt, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amt = atoi(argv[1]);

	while (amt > 0)
	{
		if (amt >= 25)
			amt -= 25;
		else if (amt >= 10)
			amt -= 10;
		else if (amt >= 5)
			amt -= 5;
		else if (amt >= 2)
			amt -= 2;
		else if (amt >= 1)
			amt -= 1;
		change += 1;
	}
	printf("%d\n", change);
	return (0);
}
