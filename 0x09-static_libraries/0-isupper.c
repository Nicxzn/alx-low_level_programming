#include <ctype.h>
#include "main.h"
/**
 * _isupper -  function that checks for capital letter character.
 *
 * @c: is the variable(character) to  check
 *
 * Return: 1 if c is capital letter otherwise 0
 */
int _isupper(int c)
{
int b = isupper(c);
if (b == 0)
return (b);
else
return (1);
}
