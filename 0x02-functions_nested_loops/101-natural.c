#include <stdio.h>

/**
 *main - Entry point
 *
 * Return: returns 0
 */
int main(void)
{
        int n, harts = 0;

        for (n = 0; n < 1024; n++)
        {
        if ((n % 3) == 0 || (n % 5) == 0)
        {
                harts += n;
        }
        }
        printf("%d\n", harts);
	return (0);
}
