#include "main.h"
/**
 * _strlen - function returns length of string
 * @s: is the string to survey
 *
 * Return: integer length of the string
 */
int _strlen(char *s)
{
int length = 0;
while (s[length])
length++;
return (length);
}
