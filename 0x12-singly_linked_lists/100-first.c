#include <stdio.h>

/**
 * printthis - prints something before main function
 * is executed
 */

void printthis(void) __attribute__((constructor));

void printthis(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
