#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int t;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	t = n % 10;
	printf("Last digit of %d is %d", n, t);
	if (t > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (t == 0)
	{
		printf("and is 0");
	}
	else if (t < 6 && t != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}

