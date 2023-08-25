#include "main.h"

/**
 * _strncpy - copies an inputted number
 * @dest: the buffer storing the string copy
 * @src: the source of the string
 * @n: the max. number to be copied from src
 * Return: A pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, srclen = 0;

	while (src[i++])
		srclen++;
	for (i = 0; src[i] && i < 0; i++)
		dest[i] = src[i];
	for (i = srclen; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
