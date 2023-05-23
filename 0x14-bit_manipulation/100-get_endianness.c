#include "main.h"
/**
 * get_endianness - a function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int n = 0x00000001;
	char *c = (char *)&n;
	return *(c);
}
