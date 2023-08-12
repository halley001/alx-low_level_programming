#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:
 *
 * Return: Returns 0
 */
int main(void)
{
	int i = 0;
	int h = 0;

	while (i < 10)
	{
		h = i + 1;
		while (h < 10)
		{
		putchar(i + '0');
		putchar(h + '0');
		if (i < 8)
		{
			putchar(',');
			putchar(' ');
		}
		h++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
