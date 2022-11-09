#include "main.h"

/**
 * *_strpbrk - Function that searches a string for any of set of bytes
 * @s: String to be scanned
 * @accept: contains bytes
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (0);
}
