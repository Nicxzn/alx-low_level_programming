#include "main.h"
/**
 * print_alphabet_x10 - Make alphabet x10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i <= 9)
{
int x = 'a';
while (x <= 'z')
{
_putchar(x);
x++;
}
_putchar('\n');

i++;
}
}
