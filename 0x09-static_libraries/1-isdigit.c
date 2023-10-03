#include <ctype.h>
#include "main.h"
/**
 * _isdigit -  function that surveys numbers .
 *
 * @c: is the variable to  surveying
 *
 * Return: 1 if c is a digit otherwise 0
 */
int _isdigit(int c)
{
int d = isdigit(c);
if (d == 0)
return (d);
else
return (1);
}
