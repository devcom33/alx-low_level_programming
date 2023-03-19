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
				for (h = k + 1; h <= 9; h++)
				{
					if (k > 0)
					{
						h = 0;
					}
					putchar((i % 10) + '0');
					putchar((j % 10) + '0');
					putchar(' ');
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
