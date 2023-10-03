#include "main.h"
/**
 * _puts - function prints a string and a new line
 * @str: pointer to a string to print
 *
 * Return: 0
 */
void _puts(char *str)
{
int k = 0;
while (str[k])
{
_putchar(str[k]);
k++;
}
_putchar('\n');
}
