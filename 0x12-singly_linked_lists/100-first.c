#include <stdio.h>

void __attribute__((constructor)) myHouse(void);
/**
 * myHouse - print a string bfr mn
 */

void myHouse(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
