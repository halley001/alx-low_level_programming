#include "main.h"

/**
 * isdigit - function that checks for a digit (0 through 9);
 *
 * Return - Returns 1 if c is a digit Returns 0 otherwise
 *
 */

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return(0);
}
