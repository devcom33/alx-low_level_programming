#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main-print who is greater
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d ", n);
	if (rand() > 5)
	{
		printf("is %d and is greater than 5", rand());
	}
	else if (rand() == 5)
	{
		printf("is %d and is 0", rand());
	}
	else if ((rand() < 6) && (rand() > 0))
	{
		printf("is %d and is less than 6 and not 0", rand());
	}
	return (0);
}
