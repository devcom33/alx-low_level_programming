#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - print who is greater than other
 * Return:0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("and is greater than 5\n");

	}
	else if (n == 0)
	{
		printf("and is 0\n");

	}
	else if ((n < 6) && (n > 0))
	{

		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
