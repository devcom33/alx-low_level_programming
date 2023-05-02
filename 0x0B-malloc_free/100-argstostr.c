#include "main.h"
/**
 * argstostr -  function that concatenates all the arguments
 * @ac: number of arguments
 * @av: arguments
 * Return: arguments or NULL
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, size = 0;
	char *sarg;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
		{
			size++;
			j++;
		}
		size++;
	}
	sarg = malloc((size + 1) * sizeof(char));
	if (sarg == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < ac; i++)
	{
		while (av[i][j])
		{
			sarg[k] = av[i][j];
			k++;
			j++;
		}
		sarg[k] = '\n';
		k++;
	}
	sarg[k] = '\0';
	return (sarg);
}
