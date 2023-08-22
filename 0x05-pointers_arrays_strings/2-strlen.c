#include "main.h"

/**
 * _strlen - the main function
 * @s: character
 * Return: something
 */

int _strlen(char *s)
{
	int count = 0;
		int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
