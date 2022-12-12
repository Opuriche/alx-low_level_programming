#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : printing the alphabets
 *
 * Return: 0
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
