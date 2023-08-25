#include "main.h"
/**
 * _strncat - concatenate two stings using at most an inputted number from src
 * @dest: The string to append on
 * @src: The string to append to dest
 * @n: the number of bytes to be append to dest
 * Return: A pointer in the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, destlen = 0;

	while (dest[i++])
		destlen++;
	for (i = 0; src[i] && i < n; i++)
		dest[destlen++] = src[i];
	return (dest);
}
