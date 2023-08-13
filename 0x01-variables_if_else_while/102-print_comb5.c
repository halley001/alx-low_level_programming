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
	int i;
	int j;

	for (i = 0; i <= 99; i++)
	{
	if (i != 0 || j != 0)
	{
	putchar(',');
	putchar(' ');
	}
	putchar(i / 10 + '0');
	putchar(i % 10 + '0');
	}
	putchar('\n');
	return (0);
}
