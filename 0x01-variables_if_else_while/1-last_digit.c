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
	if (n > 5)
	{
		printf("is %d and is greater than 5", (n % 10));
	}
	else if (n == 0)
	{
		printf("is %d and is 0", (n % 10));
	}
	else if ((n < 6) && (n > 0))
	{
		printf("is %d and is less than 6 and not 0", (n % 10));
	}
	return (0);
}