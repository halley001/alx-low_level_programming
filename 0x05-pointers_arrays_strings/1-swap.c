#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 * @a: param 1
 * @b: param 2
 * Returns: void
 */
void swap_int(int *a, int *b)
{
int temp = *a;

*a = *b;
*b = temp;
}
