#include "main.h"
/**
 * *_strcpy - Function Copy the string pointed to by pointer *src to
 * the referee pointed to by `dest`
 * @dest: char pointer
 * @src: char pointer
 * Return: Pointer  to `dest
 */
char *_strcpy(char *dest, char *src)
{
int b = -1;
do {
b++;
dest[b] = src[b];
} while (src[b] != '\0');
return (dest);
}
