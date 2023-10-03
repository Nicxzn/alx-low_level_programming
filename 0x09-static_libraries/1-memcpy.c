#include "main.h"
/**
 ** _memcpy - funtion to copies n bytes from memory area
 * src to memomy area dest
 * @dest: argument memory area
 * @src:argument to  source
 * @n: argument to length of src
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
