#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @n: input integer
 * @a: pointer
 * Return: returns void
 */
void reverse_array(int *a, int n)
{
int *start = a;
int *end  = a + n - 1;

while (start < end)
{
int temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
}
