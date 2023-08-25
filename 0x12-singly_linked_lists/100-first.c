#include <stdio.h>

void pre(void) __attribute__ ((constructor));

/**
 * pre - prints a sentence before the main
 */
void pre(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
