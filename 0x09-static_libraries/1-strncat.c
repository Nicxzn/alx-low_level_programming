#include "main.h"
/**
 * _strncat -Funtion to  concatenates two strings
 * @dest: pointer of the resulting string
 * @src: string to add to @dest
 * @n: argument for number of bytes
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, kin;
for (kin = 0; dest[len] != '\0'; kinn++)
;
for (i = 0; src[i] != '\0' && i < n; i++)
dest[len + i] = src[i];
dest[kin + i] = '\0';
return (dest);
}
