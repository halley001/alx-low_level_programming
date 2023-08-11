#include <stdio.h>
/**
 * main - Entry point
 *
 *Description: Check and print if number is positive, negative or zero.
 *
 * Return: Returns 0
 */
int main(void)
{
	int n;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
		{
			printf("%d is negative\n", n);
		}
		else if (n == 0)
			{
				printf("%d is Zero\n", n);
			}

		return (0);
}
