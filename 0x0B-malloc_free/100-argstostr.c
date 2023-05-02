#include "main.h"
/**
 * argstostr -  function that concatenates all the arguments
 * @ac: number of arguments
 * @av: arguments
 * Return: arguments or NULL
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *c = "\n";
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		return (av[i] + c);
	}
	return (NULL);
}
