#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: a function that prints the alphabet,
 * in lowecase followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
int x = 'a';
while (x <= 'z')
{
_putchar(x);
x++;
}
_putchar('\n');
}
