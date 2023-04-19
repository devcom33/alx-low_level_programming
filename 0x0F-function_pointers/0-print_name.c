#include "main.h"
/**
 * print_name - print name of someone
 * @name: string argument of name
 * @f: pointer function with a type of void
 */
void print_name(char *name, void (*f)(char *))
{
	void (*p)(char *);

	p = f;

	p(name);
}
