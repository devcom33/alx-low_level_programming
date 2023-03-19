#include <stdio.h>
/**
 * main - print combinations of nums
 * Return: 0
 */


int main(void)
{
	int i, j, k, h;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (h = 1; h <= 0; h++)
				{
					putchar((i % 10) + '0');
					putchar((j % 10) + '0');
					putchar((k % 10) + '0');
					putchar((h % 10) + '0');
					if (i + j + k + h != 35)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
