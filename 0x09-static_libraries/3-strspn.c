#include "main.h"

/**
 * _strspn -  funtion Gets the length of a prefix substring.
 * @s: The string  argument to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in s which
 * consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int leghth;

	while (*s)
	{
		for (index = 0; accept[leghth]; leghth++)
		{
			if (*s == accept[leghth])
			{
				bytes++;
				break;
			}

			else if (accept[leghth + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
