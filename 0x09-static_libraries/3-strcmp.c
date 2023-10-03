#include "main.h"

/**
 * _strcmp - function compare 2 strings
 * @s1: first string pointer
 * @s2: second string pinter
 * Return: an integer as difference of last character
 */

int _strcmp(char *s1, char *s2)
{
int i = 0, dif = 0;
for (; s1[i] == s2[i] && s1[i] != '\0'; i++)
;
dif = s1[i] - s2[i];
return (dif);
}
