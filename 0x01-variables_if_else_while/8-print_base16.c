#include <stdio.h>
/**
 * main - Entry point
 *
 * Description:
 * Return: Returns 0
 */
int main(void)
{
	int h = 0;

	while (h < 16)
	{
	if (h < 10)
	{
		putchar(h + 48);
	}
	else
	{
		putchar(h + 87);
	}

	h++;
	}
	putchar('\n');
	return (0);
}
