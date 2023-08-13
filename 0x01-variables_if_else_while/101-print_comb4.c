#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:
 *
 * Return: Return 0
 */
int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < 8)
	{
		j = i + 1;
		while (j < 9)
		{
			k = j + 1;
			while (k < 10)
			{	putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
					if (i < 7)
					{
						putchar(',');
						putchar(' ');
					}
					k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
